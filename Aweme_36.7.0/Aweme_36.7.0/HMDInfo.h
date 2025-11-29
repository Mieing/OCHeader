@class NSDictionary, NSString;

@interface HMDInfo : NSObject

@property (class, readonly, nonatomic) BOOL isBytest;
@property (class, readonly, copy, nonatomic) NSDictionary *bytestFilter;

@property (readonly, nonatomic) NSString *appDisplayName;
@property (readonly, nonatomic) NSString *shortVersion;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSString *commitID;
@property (readonly, nonatomic) NSString *emUUID;
@property (readonly, nonatomic) NSString *sdkVersion;
@property (readonly, nonatomic) long long sdkVersionCode;
@property (readonly, nonatomic) NSString *buildJobID;
@property (readonly, nonatomic) NSString *lastStartupShortVersion;
@property (readonly, nonatomic) NSString *lastStartupBundleIdentifier;
@property (readonly, nonatomic) NSString *lastStartupBuildVersion;
@property (readonly, nonatomic) NSString *lastStartupSDKVersion;
@property (readonly, nonatomic) NSString *mainAppBundlePath;
@property (readonly, nonatomic) NSDictionary *mainAppInfoPlist;
@property (readonly, nonatomic) NSString *mainAppShortVersion;
@property (readonly, nonatomic) NSString *mainAppBuildVersion;
@property (readonly, nonatomic) NSString *mainAppCommitID;
@property (readonly, copy, nonatomic) NSDictionary *automationTestInfoDic;
@property (readonly, nonatomic) NSString *brainArchitecture;
@property (readonly, nonatomic) int brainType;
@property (readonly, nonatomic) int brainSubType;
@property (readonly, nonatomic, getter=isEnergySavingEnabled) BOOL energySavingEnabled;
@property (readonly, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) NSString *systemName;
@property (readonly, nonatomic) NSString *executablePath;
@property (readonly, nonatomic) NSString *executableName;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) NSString *processName;
@property (readonly, nonatomic) NSString *platform;
@property (readonly, nonatomic) int processID;
@property (readonly, nonatomic) BOOL isInHouseApp;
@property (readonly, nonatomic) NSString *ssAppMID;
@property (readonly, nonatomic) NSString *ssAppScheme;
@property (readonly, nonatomic) NSString *appOwnURL;
@property (readonly, nonatomic) BOOL isUpgradeUser;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) NSString *echoTag;
@property (readonly, nonatomic) NSString *decivceModel;
@property (readonly, nonatomic) NSString *machineModel;
@property (readonly, nonatomic) NSString *tongueID;
@property (readonly, nonatomic) NSString *currentRegion;
@property (readonly, nonatomic) NSString *pixelSigString;
@property (readonly, nonatomic) NSString *localeSig;
@property (readonly, nonatomic) unsigned long long devicePerformaceLevel;
@property (readonly, nonatomic) BOOL isMacARM;
@property (readonly, nonatomic) BOOL isEnvAbnormal;

+ (id)getSysInfoByName:(char *)a0;
+ (id)brainArchForMajor:(int)a0 minor:(int)a1;
+ (id)_automationTestInfoDictionary;
+ (id)machineModel;
+ (id)defaultInfo;
+ (BOOL)isRunningTests;

- (BOOL)whetherAppIsUpdated;
- (id)heimdallrPlistInfo;
- (long long)transformToIntegerFromString:(id)a0;
- (void)gainLastStartupAppInfoAndUpdateIfNeeded;
- (id)stringSysctl:(id)a0;
- (struct CGSize { double x0; double x1; })pixelSig;

@end
