@class NSMutableDictionary, RTVVoipEventHandler, RxScheduler, NSString, RTVVoipMonitor, NSObject;
@protocol RxInjector, RTVVoipService, RTVLiveCommunicationKitService, RTVVoipConfigureManagerInterface, RTVAccountManagerInterface, RTVCoordinator, OS_dispatch_queue, RTVVoipManagerInterface, RTVChatDataController, RTVUserProfileManagerInterface, RTVVoipContextManagerInterface;

@interface RTVLiveCommunicationKitController : NSObject <RTVVoipObserver, RTVLCKSessionControllerDelegate, RTVLiveCommunicationKitDelegate>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVVoipContextManagerInterface> voipContextManager;
@property (readonly, nonatomic) id<RTVVoipManagerInterface> voipManager;
@property (readonly, nonatomic) RTVVoipMonitor *voipMonitor;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> voipConfigureManager;
@property (readonly, nonatomic) id<RTVAccountManagerInterface> accountManager;
@property (readonly, nonatomic) RTVVoipEventHandler *eventHandler;
@property (readonly, nonatomic) id<RTVCoordinator> coordinator;
@property (readonly, nonatomic) id<RTVVoipService> voipService;
@property (readonly, nonatomic) NSMutableDictionary *sessionControllerMapper;
@property (readonly, nonatomic) RxScheduler *scheduler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *performQueue;
@property (readonly, nonatomic) id<RTVLiveCommunicationKitService> lckService;
@property (readonly, nonatomic) id<RTVChatDataController> dataController;
@property (retain, nonatomic) NSString *lastVoipRoomID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)liveCommunicationPerformQueue;
- (void)liveCommunicationKitDidTimedOutPerforming:(id)a0;
- (void)liveCommunicationKitDidUserPerferAction:(id)a0;
- (void)didActivateAudioSession:(id)a0;
- (void)didDeactivateAudioSession:(id)a0;
- (void)liveCommunicationKitOnReportNewComingCallError:(id)a0;
- (void)handleEnhanceVoip:(id)a0;
- (void)handleVoIPPushPayload:(id)a0 fromLaunchStash:(BOOL)a1;
- (void)liveCommunicationKitSessionControllerDidFinish:(id)a0;
- (void)__handleReceiveVoip:(id)a0 pushResponse:(id)a1 fromLaunchStash:(BOOL)a2 innerPushTitle:(id)a3;
- (void)__updateOrCreateSessionController:(id)a0 pushResponse:(id)a1 fromLaunchStash:(BOOL)a2 innerPushTitle:(id)a3;
- (id)__sessionControllerForKey:(id)a0;
- (void)__cacheSessionController:(id)a0 voip:(id)a1;
- (BOOL)__isAnotherIncomingCallWhileRinging:(id)a0;
- (id)__allSessionControllers;
- (void).cxx_destruct;
- (BOOL)isDisplaying;

@end
