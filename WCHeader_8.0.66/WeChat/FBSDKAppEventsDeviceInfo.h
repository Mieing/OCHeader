@class NSString;

@interface FBSDKAppEventsDeviceInfo : NSObject {
    NSString *_carrierName;
    NSString *_timeZoneAbbrev;
    unsigned long long _remainingDiskSpaceGB;
    NSString *_timeZoneName;
    NSString *_bundleIdentifier;
    NSString *_longVersion;
    NSString *_shortVersion;
    NSString *_sysVersion;
    NSString *_machine;
    NSString *_language;
    unsigned long long _totalDiskSpaceGB;
    unsigned long long _coreCount;
    double _width;
    double _height;
    double _density;
    long long _lastGroup1CheckTime;
    BOOL _isEncodingDirty;
    NSString *_encodedDeviceInfo;
}

+ (void)extendDictionaryWithDeviceInfo:(id)a0;
+ (void)initialize;
+ (id)sharedDeviceInfo;
+ (id)_getTotalDiskSpace;
+ (id)_getRemainingDiskSpace;
+ (unsigned int)_coreCount;
+ (unsigned int)_readSysCtlUInt:(int)a0 type:(int)a1;
+ (id)_getCarrier;

- (id)init;
- (id)encodedDeviceInfo;
- (void)setEncodedDeviceInfo:(id)a0;
- (void)_collectPersistentData;
- (BOOL)_isGroup1Expired;
- (void)_collectGroup1Data;
- (id)_generateEncoding;
- (void).cxx_destruct;

@end
