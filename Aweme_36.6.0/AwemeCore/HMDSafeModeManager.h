@class NSString;

@interface HMDSafeModeManager : NSObject

@property (nonatomic) unsigned long long safeModeType;
@property (copy, nonatomic) NSString *appID;

+ (void)hmdSafeModeMildTypeInvoke;
+ (void)hmdSafeModeCriticalTypeInvoke;
+ (void)setupWithAPPID:(id)a0;
+ (id)sharedInstance;

- (void)hmdSafeModeMildTypeInvoke;
- (void)rewriteSyncConfig;
- (void)hmdSafeModeCriticalTypeInvoke;
- (void)configUpdatedOrAppExistTimeout:(id)a0;
- (void)hmdSafeModeContinuousCrashCount:(int)a0;
- (id)reservedConfigPaths;
- (void)rewriteHostConfigFileWithModulesReserve:(id)a0;
- (id)reservedDirectorys;
- (void)safeModeCheck;
- (void).cxx_destruct;

@end
