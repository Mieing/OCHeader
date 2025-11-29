@class NSString;

@interface HMDCrashLoadMeta_new : NSObject {
    BOOL _offline;
    BOOL _envAbnormal;
    BOOL _isiOSAppOnMac;
    BOOL _crashDataLoaded;
    unsigned int _processID;
    NSString *_appID;
    NSString *_uploadingHost;
    NSString *_autoTestType;
    NSString *_testRuntime;
    unsigned long long _hoursFromGMT;
    NSString *_language;
    NSString *_region;
    NSString *_codeType;
    unsigned long long _physicalMemory;
    NSString *_bundleID;
    NSString *_displayName;
    NSString *_deviceModel;
    NSString *_processName;
    NSString *_UUID;
    double _startTime;
    NSString *_OSBuildVersion;
    NSString *_OSVersion;
    NSString *_appVersion;
    NSString *_bundleVersion;
    NSString *_commitID;
    NSString *_SDKVersion;
    NSString *_jobID;
}

+ (id)meta;

- (void)loadCrashData:(id)a0;
- (void).cxx_destruct;

@end
