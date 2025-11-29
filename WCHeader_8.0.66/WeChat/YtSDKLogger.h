@interface YtSDKLogger : NSObject

+ (void)registerLoggerListener:(id /* block */)a0 withNativeLog:(BOOL)a1;
+ (BOOL)needNativeLog;
+ (void)logDebug:(id)a0;
+ (void)logInfo:(id)a0;
+ (void)logWarnning:(id)a0;
+ (void)logError:(id)a0;
+ (void)showLog:(long long)a0 withMessage:(id)a1;

@end
