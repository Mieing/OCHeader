@interface BDWebViewJSBMonitor : BDHybridBaseMonitor

+ (BOOL)startMonitorWithClasses:(id)a0 setting:(id)a1;
+ (void)reportJSBErrorInWebView:(id)a0 withModel:(id)a1;
+ (void)reportJSBFetchErrorInWebView:(id)a0 withModel:(id)a1;
+ (void)reportJSBPerfInWebView:(id)a0 withModel:(id)a1;
+ (void)reportJSBPerfV2InWebView:(id)a0 withInfos:(id)a1;
+ (void)reportJSBPVInWebView:(id)a0 withInfos:(id)a1;

@end
