@class RTVVoipMonitor, NSString;
@protocol RTVMonitor, RTVUserProfileManagerInterface, RTVXRRoomSessionControllerInterface, RxInjector, RTVXRControllerInjector, RTVPerformanceMonitorInterface;

@interface RTVEffectGameMonitor : NSObject <RTVEffectGameMonitor>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, nonatomic) id<RTVPerformanceMonitorInterface> performanceMonitor;
@property (readonly, nonatomic) id<RTVMonitor> monitor;
@property (readonly, nonatomic) RTVVoipMonitor *voipMonitor;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> userProfileManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)startEventWithIdentifier:(id)a0;
- (void)endEventWithIdentifier:(id)a0 service:(id)a1 dictionary:(id)a2 success:(BOOL)a3 error:(id)a4;
- (void)monitorEffectGameDevCreateWithIdentifier:(id)a0 gameModel:(id)a1;
- (void)monitorEffectGameDevCreateResult:(BOOL)a0 identifier:(id)a1 gameSession:(id)a2 errorCode:(id)a3 internalErrorCode:(id)a4;
- (void)monitorEffectGameDevGameLoadWithIdentifier:(id)a0 gameSession:(id)a1;
- (void)monitorEffectGameDevGameLoadResult:(BOOL)a0 identifier:(id)a1 gameSession:(id)a2 needDownload:(BOOL)a3 failedStage:(unsigned long long)a4 failedReason:(id)a5;
- (void)monitorEffectGameDevGameStartWithIdentifier:(id)a0 gameSession:(id)a1;
- (void)monitorEffectGameDevGameEndWithIdentifier:(id)a0 gameSession:(id)a1 endReason:(unsigned long long)a2;
- (id)__monitorErrorInfoWithError:(id)a0;
- (id)__basicInfoWithVoipSession:(id)a0;
- (void)__trackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void).cxx_destruct;

@end
