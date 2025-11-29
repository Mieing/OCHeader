@interface BDHMPIAMonitor : NSObject

+ (void)reportToTEA:(id)a0 webview:(id)a1 params:(id)a2;
+ (void)reportToSlardar:(id)a0 webview:(id)a1 category:(id)a2 metrics:(id)a3;
+ (void)fetchAndReportWithPerfDict:(id)a0 forEvent:(id)a1 andParams:(id)a2;
+ (id)getJsContextData:(id)a0;
+ (id)handleContainerInfoToMetrics:(id)a0;
+ (void)handlePIAEvent:(id)a0 webview:(id)a1 category:(id)a2 metrics:(id)a3;

@end
