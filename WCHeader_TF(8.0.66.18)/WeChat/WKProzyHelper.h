@interface WKProzyHelper : NSObject

+ (const struct mach_header { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *)getWebkitHeader;
+ (BOOL)isProzyInfoValid:(id)a0;
+ (BOOL)setWithProxyInfo:(id)a0;
+ (id)prozyInfoWithMachineInfo:(id)a0;
+ (void)downloadWKProzyInfoWithCompletion:(id /* block */)a0;
+ (void)markAndReportWith3SecondCrash:(BOOL)a0;
+ (void)mtt_reset_wkcrashstate;
+ (void)checkProxyActionState;
+ (void)finishActionWithResult:(long long)a0;
+ (void)finishActionOptimized:(long long)a0;
+ (long long)proxyActionState;
+ (void)setProxyActionState:(long long)a0;
+ (void)setProxyActionState:(long long)a0 sync:(BOOL)a1;
+ (void)setProxyResult:(long long)a0;
+ (void)setProxyResult:(long long)a0 sync:(BOOL)a1;
+ (long long)proxyResult;
+ (BOOL)isDetectedCrash;
+ (BOOL)isDetectedCrashWithTimes:(long long)a0;
+ (BOOL)isCrashHasReported;
+ (void)setCrashReported:(BOOL)a0;
+ (id)phoneID;
+ (void)setWKProzyHasSucceedBefore:(BOOL)a0;
+ (BOOL)isWKProzyHasSucceedBefore;
+ (BOOL)shouldDownloadWKProzy;
+ (BOOL)shouldPreload;
+ (void)initialize;
+ (void)downloadProxyInfo;
+ (void)doDownloadProxy:(id /* block */)a0;
+ (BOOL)setProxyInfoLocallyWithError:(id *)a0;
+ (void)addObserverForTerminate;
+ (void)removeObserverForTerminate;
+ (void)handleTerminateNotification;
+ (void)clearProzyMemory;
+ (BOOL)enableWKProzy:(id *)a0;
+ (BOOL)isProzyAvailable;
+ (void)crashProtectionBegin;
+ (void)crashProtectionEnd;
+ (void)resetStateWhenAppEnterBackground;
+ (void)downloadProzyInfoIfNecessary;
+ (void)cleanupCrashState;
+ (void)cleanAndDlWK:(id /* block */)a0;
+ (void)checkProzyInfoWithCompletion:(id /* block */)a0;
+ (void)preLoadWKProxyInfo;
+ (void)deleteLocalWKProzyInfo;

- (id)init;

@end
