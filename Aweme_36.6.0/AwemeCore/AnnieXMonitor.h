@class NSString, BDXThreadSafeDictionary, AnnieXContainerBaseModel, NSMutableDictionary, AnnieXContainerTimingModel, AnnieXMonitorConfig, AnnieXLynxTimingModel, AnnieXMonitorTeaReporter;

@interface AnnieXMonitor : NSObject <BDHMXContainerDataSource>

@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *monitorSessionId;
@property (retain, nonatomic) AnnieXContainerBaseModel *baseModel;
@property (retain, nonatomic) AnnieXContainerTimingModel *timingModel;
@property (retain, nonatomic) AnnieXLynxTimingModel *lynxModel;
@property (retain, nonatomic) AnnieXMonitorConfig *monitorConfig;
@property (retain, nonatomic) AnnieXMonitorTeaReporter *teaReport;
@property (nonatomic) BOOL hasReportedError;
@property (weak, nonatomic) id monitorDic;
@property (retain, nonatomic) NSMutableDictionary *customContext;
@property (retain, nonatomic) BDXThreadSafeDictionary *endToEndDic;
@property (nonatomic) BOOL hasReportedEndToEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)currentTimeInterval;

- (void)attachLynxView:(id)a0;
- (void)collectTimestamp:(id)a0;
- (void)reportContainerErrorWithSessionId:(id)a0 withErrorCode:(long long)a1 withErrorMessage:(id)a2;
- (void)reportPV;
- (void)collectContainerContext:(id)a0 value:(id)a1;
- (void)collectTiming:(id)a0 timestamp:(double)a1;
- (void)reportFullTimeWhenLeaveWithPlatForm:(id)a0;
- (void)updateMonitorConfig:(id)a0;
- (void)collectContainerBase:(id)a0 value:(id)a1;
- (id)containerBase;
- (void)collectTiming:(id)a0;
- (void)collectOpenTimeWithTimestamp:(double)a0;
- (id)slAnnieXMonitor;
- (void)reportFullTimeWhenFirstScreenWithPlatForm:(id)a0 sampleLevel:(unsigned long long)a1;
- (id)generatePerfMetric;
- (void)_reportWithEventName:(id)a0 commonParams:(id)a1 metric:(id)a2 category:(id)a3 extra:(id)a4 platform:(id)a5 sampleLevel:(unsigned long long)a6;
- (BOOL)filterTrackingPoints;
- (void)_reportToTeaWithEventName:(id)a0 extra:(id)a1 url:(id)a2;
- (id)monitorBid;
- (void)dispatchCardMonitorOptimizeModeBlock:(id /* block */)a0;
- (void)reportEndToEndEventWithNavigationId:(id)a0 bid:(id)a1;
- (void)updateEndToEndStage:(id)a0 status:(id)a1 errorCode:(id)a2 errorMessage:(id)a3;
- (void)collectCustomContainerContext:(id)a0;
- (void)collectLynxSetupTiming:(id)a0;
- (void)collectLynxUpdateTiming:(id)a0;
- (void)forceCollectOpenTimeWithTimestamp:(double)a0;
- (long long)fetchMonitorTimingWithKey:(id)a0;
- (void)reportHybridEventWithData:(id)a0 eventType:(id)a1;
- (void)reportUpdateView;
- (void)reportEndToEndEvent;
- (void)updateEndToEndStage:(id)a0 status:(id)a1;
- (void).cxx_destruct;
- (id)containerInfo;
- (id)initWithSessionId:(id)a0;
- (id)templateUrl;

@end
