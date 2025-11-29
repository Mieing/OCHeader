@interface BDHMBDWebKitCustomEventMonitor : NSObject

+ (void)reportToTea:(id)a0 params:(id)a1;
+ (void)webReportCustomWithEventName:(id)a0 bid:(id)a1 webView:(id)a2 metric:(id)a3 category:(id)a4 extra:(id)a5 timing:(id)a6 baseInfo:(id)a7 maySample:(long long)a8;
+ (BOOL)startMonitorWithClasses:(id)a0 setting:(id)a1;
+ (void)reportWithEventName:(id)a0 containerId:(id)a1 commonParams:(id)a2 metric:(id)a3 category:(id)a4 extra:(id)a5 aid:(id)a6 bid:(id)a7 containerBid:(id)a8 maySample:(long long)a9;

@end
