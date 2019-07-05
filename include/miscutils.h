template <typename T, unsigned S>
inline unsigned arraySize(const T (&v)[S]) {
    return S;
}

inline static bool checkTelemetryOptIn() {
    return false;
}

inline static bool isMSFTInternalMachine() {
    return false;
}

inline static std::string getMachineID() {
    return "";
}

