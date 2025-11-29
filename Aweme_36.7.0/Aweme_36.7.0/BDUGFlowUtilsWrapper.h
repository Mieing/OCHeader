@interface BDUGFlowUtilsWrapper : NSObject

+ (BOOL)isReportBackEnable;
+ (double)dispatchAfterInterval4ReportBack;
+ (BOOL)isUserNormalReportEnable;
+ (BOOL)isGlobalFlowMonitorEnable;
+ (BOOL)isNeedCache;
+ (double)dispatchAfterInterval4ColdStart;
+ (BOOL)isGlobalFlowMonitorEnable:(BOOL)a0;
+ (id)flowDictFromHost;
+ (BOOL)isReportBackEnable:(BOOL)a0;
+ (BOOL)isUserNormalReportEnable:(BOOL)a0;
+ (BOOL)isEnableHookOpenUrl:(BOOL)a0;
+ (BOOL)isEnableHookOpenUrl;
+ (BOOL)enableAppStoreHook;
+ (BOOL)enableLeaveSignalDetect;
+ (double)timeout;

@end
