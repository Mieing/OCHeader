@class HTSEventContext;
@protocol IESLiveRoomService;

@interface IESLiveIncentiveTaskPanelManagerMonitor : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)traceTaskPanelManagerReset:(id)a0;
- (void)monitor_taskPanelResetWithQueueSize:(long long)a0;
- (void)traceHandlePopupScehmaWithExtra:(id)a0;
- (void)monitor_taskAddPanelWithPath:(id)a0 priority:(long long)a1 isFrequencyPass:(BOOL)a2 queueSize:(long long)a3;
- (void)traceCheckFrequencyDailyWithResult:(BOOL)a0;
- (void)traceCheckFrequencyLifetimeWithResult:(BOOL)a0;
- (void)traceCreatePanelInfo:(id)a0;
- (void)traceObservePanelState:(unsigned long long)a0;
- (void)tracePanelShowSuccessWithPanelInfo:(id)a0;
- (void)traceTaskPanelDismiss:(id)a0;
- (void)monitor_taskPanelLoadStateWithPath:(id)a0 loadSuccess:(BOOL)a1 queueSize:(long long)a2;
- (void)sendTraceEventWithStep:(id)a0 extra:(id)a1;
- (void).cxx_destruct;

@end
