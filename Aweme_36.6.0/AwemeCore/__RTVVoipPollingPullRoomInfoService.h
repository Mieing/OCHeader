@class RxScheduler, RTVVoipPollingPullRoomInfoModel, NSString;
@protocol RTVVoipConfigureManagerInterface, RxInjector, RTVVoipManagerInterface, RTVXRRoomSessionControllerInterface;

@interface __RTVVoipPollingPullRoomInfoService : NSObject <RTVVoipPollingPullRoomInfoService>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RxScheduler *pollingScheduler;
@property (readonly, nonatomic) id<RTVVoipManagerInterface> voipManager;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> voipConfigureManager;
@property (readonly, nonatomic) RTVVoipPollingPullRoomInfoModel *model;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (nonatomic) BOOL isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__log:(id)a0;
- (void)__startPollingPullRoomInfoIfNeedWithModel:(id)a0;
- (id)currentRunningModel;
- (void)invalid;
- (void).cxx_destruct;
- (void)start;

@end
