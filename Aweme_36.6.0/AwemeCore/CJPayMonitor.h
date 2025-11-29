@class HMDTTMonitor;

@interface CJPayMonitor : NSObject

@property (retain, nonatomic) HMDTTMonitor *monitor;
@property (nonatomic) double lastReportTime;

+ (void)cj_reportRuntimeExceptionWithName:(id)a0 priority:(unsigned long long)a1 meta:(id)a2;
+ (id)shared;

- (void)trackService:(id)a0 value:(id)a1 extra:(id)a2;
- (void)trackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)cj_startMonitorWithBizModule:(id)a0 context:(id)a1;
- (void)trackService:(id)a0 extra:(id)a1;
- (void)sdkSessionLaunchMonitor;
- (void)enterFluencyCustomSceneWithUniq:(id)a0;
- (void)leaveFluencyCustomSceneWithUniq:(id)a0;
- (void)trackService:(id)a0 metric:(id)a1 category:(id)a2;
- (void)monitorEventWithName:(id)a0 logBlock:(id /* block */)a1 metric:(id)a2 category:(id)a3 extra:(id)a4;
- (void)trackServiceAllInOne:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)trackService:(id)a0 category:(id)a1 extra:(id)a2;
- (void)trackServiceAllInOne:(id)a0 logBlock:(id /* block */)a1 metric:(id)a2 category:(id)a3 extra:(id)a4;
- (void)fieldSpecificationDetectionWithName:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3 logBlock:(id /* block */)a4 callBack:(id /* block */)a5;
- (id)p_buildCommonCategoryParams;
- (void)reportAlogWithName:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3 log:(id)a4;
- (void)specificationCheckWithName:(id)a0 category:(id)a1 extra:(id)a2 log:(id)a3;
- (void).cxx_destruct;

@end
