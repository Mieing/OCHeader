@class NSString, NSMutableDictionary, RxScheduler, RTVVoipTracker, RTVVoipConfigureManager, RTVVoipMonitor, NSMutableArray;
@protocol RTVXRBusinessRoomContextManagerInterface, RTVVoipSettingManagerInterface, RTVCoordinator, RTVVoipManagerInterface, RTVLiveCommunicationKitService, RTVPushServiceInterface, RTVVoipPerformanceMonitor, RTVStateTransferActionHandlerManagerInterface, RTVUserProfileManagerInterface, __RTVVoipContextManagerPrivateInterface, RTVVoipContextManagerInterface, RxInjector, RTVVoipModelStoreInterface;

@interface RTVVoIPReceiver : NSObject <RTVVoIPReceiver>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RxScheduler *readScheduler;
@property (readonly, nonatomic) RTVVoipMonitor *voipMonitor;
@property (readonly, nonatomic) RTVVoipTracker *voipTracker;
@property (readonly, nonatomic) id<RTVCoordinator> rtvCoordinator;
@property (readonly, nonatomic) id<RTVPushServiceInterface> pushService;
@property (readonly, nonatomic) id<RTVVoipManagerInterface> voipManager;
@property (readonly, nonatomic) id<RTVVoipModelStoreInterface> voipStore;
@property (readonly, nonatomic) RTVVoipConfigureManager *configureManager;
@property (readonly, nonatomic) id<RTVLiveCommunicationKitService> lckService;
@property (readonly, nonatomic) id<RTVVoipPerformanceMonitor> performanceMonitor;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVVoipSettingManagerInterface> settingManager;
@property (readonly, nonatomic) id<RTVStateTransferActionHandlerManagerInterface> stateActionHandlerManager;
@property (readonly, nonatomic) id<__RTVVoipContextManagerPrivateInterface, RTVVoipContextManagerInterface> voipContextManager;
@property (readonly, nonatomic) id<RTVXRBusinessRoomContextManagerInterface> roomContextManager;
@property (readonly, nonatomic) NSMutableDictionary *receivedPushResponses;
@property (readonly, nonatomic) NSMutableDictionary *historyVoipInfo;
@property (readonly, nonatomic) NSMutableArray *receivedPushSequenceIDs;
@property (readonly, nonatomic) NSMutableDictionary *hadHandleReceiveCalls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)handleReceivePushResponse:(id)a0;
- (id)handleReceiveVoip:(id)a0 method:(long long)a1;
- (id)handlePullVoips:(id)a0 method:(long long)a1;
- (void)__trackVideoCallReceiveCallWithModel:(id)a0 enterFrom:(id)a1;
- (BOOL)__isInCall;
- (id)__receiveVoIPsFromPull:(id)a0;
- (id)__handleReceiveVoip:(id)a0 method:(long long)a1 event:(id)a2;
- (id)__handleReceiveVoip:(id)a0 event:(id)a1;
- (id)__checkEnableReceiveVoip:(id)a0;
- (id)__handleReceiveVoipWhenPassEnableAndProfileCheck:(id)a0 event:(id)a1;
- (id)__occupyVoip:(id)a0 occupyReason:(id)a1 dev_reason:(id)a2;
- (id)__checkIsValidForReceivedVoip:(id)a0;
- (id)__handleReceiveNewValidVoip:(id)a0;
- (id)__handleReceiveVoipIfIncall:(id)a0;
- (BOOL)__enableSkipSafetyBugFix;
- (id)__uniteIfNeededTheComingVoip:(id)a0 callingVoip:(id)a1;
- (id)__handlePullVoips:(id)a0 method:(long long)a1;
- (void).cxx_destruct;

@end
