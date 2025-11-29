@interface IESECPDPFullNodeTraceMonitor : NSObject

+ (void)traceFullNodeWithPageName:(id)a0 stage:(id)a1 stageStatus:(id)a2 errorMessage:(id)a3 extra:(id)a4;
+ (void)traceFullNodeWithPageName:(id)a0 stage:(id)a1 stageStatus:(id)a2 errorMessage:(id)a3 reportAlog:(BOOL)a4 extra:(id)a5;
+ (void)traceReturnBeforePageShowWithPageName:(id)a0;
+ (void)logAndMonitorWithEventName:(id)a0 pageName:(id)a1 params:(id)a2 reportAlog:(BOOL)a3;

@end
