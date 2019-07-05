//******************************************************************************
//
// Copyright (c) 2015 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

#pragma once
#include "ObjectConverter.h"
#include "UIView.h"

class UINavigationItem;
class UINavigationBar;
class UITabBarItem;

typedef std::vector<const char*> viewControllerList;

class UIViewController : public ObjectConverterSwapper {
public:
    UINavigationItem* _navigationItem;
    UITabBarItem* _tabBarItem;
    XIBArray *_childViewControllers, *_viewControllers;
    UIView* _view;
    XIBObject* _parentViewController;
    XIBArray* _segueTemplates;
    bool _resizesToFullSize;
    const char* _storyboardIdentifier;
    static viewControllerList _viewControllerNames;

    UIViewController();
    virtual void InitFromXIB(XIBObject* obj);
    virtual void InitFromStory(XIBObject* obj);
    virtual void Awaken();
    virtual void ConvertStaticMappings(NIBWriter* writer, XIBObject* obj);
};
