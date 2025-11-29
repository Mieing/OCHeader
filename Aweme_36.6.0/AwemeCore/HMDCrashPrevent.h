@interface HMDCrashPrevent : NSObject

+ (void)objcExceptionCallback:(id)a0;
+ (void)scopePrefix:(id)a0;
+ (void)scopeWhiteList:(id)a0;
+ (void)scopeBlackList:(id)a0;
+ (void)machExceptionCallback:(id)a0;
+ (void)updateMachExceptionCloudControl:(id)a0;
+ (void)setupNSExceptionHandleConnectionIfNeed;
+ (void)setupMachExceptionHandleConnectionIfNeed;
+ (void)switchOptionON:(unsigned long long)a0;
+ (void)switchOptionOFF:(unsigned long long)a0;
+ (void)setupFrameRecoverIfNeeded;
+ (void)switchNSExceptionOption:(BOOL)a0;
+ (void)switchMachExceptionOption:(BOOL)a0;
+ (void)suspendProtection;
+ (void)resumeProtection;
+ (void)switchNSExcptionOption:(BOOL)a0;
+ (unsigned long long)frameRecoverVersion;

@end
