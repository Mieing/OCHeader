@interface AWEPopViewMonitor : NSObject

+ (void)trackEvent:(id)a0 params:(id)a1;
+ (void)checkMainThread:(id)a0;
+ (void)startMonitorShowTimeoutWithAlert:(id)a0;
+ (void)startMonitorShowExceptionWithAlert:(id)a0 extraParams:(id)a1;
+ (void)startMonitorCloseTimeoutWithAlert:(id)a0;
+ (void)startMonitorCloseExceptionWithAlert:(id)a0 extraParams:(id)a1;
+ (void)trackWithAlertWrapper:(id)a0 extraParams:(id)a1;
+ (id)getParamsWithAlertWrapper:(id)a0;
+ (void)startMonitorCloseExceptionAfterTransition;

@end
