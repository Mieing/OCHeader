@class RTVXRFeedSharePreloadModel, NSString, RTVVoipModel, NSMutableSet, UIViewController;
@protocol RxInjector, RTVInteractionClientInterface, RTVXRRoomMessageSender, RTVXRControllerInjector, AFDPlayRemoteFeedContainerViewControllerProtocol, RTVFeedRequestSyncCommandControllerInterface, AWERTVFeedContentControllers, RTVUserProfileManagerInterface, RTVFeedManagerInterface;

@interface RTVFeedSharePreloadController : NSObject <RTVXRRoomMessageSenderObserver, RTVInteractionClientObserver, AFDPlayRemoteFeedContainerViewControllerDelegate, AFDPlayRemoteFeedContainerViewControllerObserver, RTVFeedSharePreloadControllerInterface, RTVFeedSharePlayerProviderInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRRoomMessageSender> messageSender;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVFeedRequestSyncCommandControllerInterface> commandRequester;
@property (retain, nonatomic) UIViewController<AFDPlayRemoteFeedContainerViewControllerProtocol> *remotePlayViewController;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVInteractionClientInterface> interactionClient;
@property (readonly, nonatomic) id<RTVFeedManagerInterface> feedManager;
@property (readonly, nonatomic) id<AWERTVFeedContentControllers> feedContentControllers;
@property (nonatomic) long long lastSyncCmdVersion;
@property (retain, nonatomic) RTVXRFeedSharePreloadModel *model;
@property (retain, nonatomic) RTVVoipModel *voip;
@property (retain, nonatomic) NSMutableSet *preloadReceivedCMDMutableSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isPreloadFeed;

- (void)rxAwakeFromPropertyInjection;
- (void)rtv_awakeFromControllerInjector;
- (void)__addObserver;
- (id)remotePlayVCWithContext:(id)a0 audioWrapper:(struct AFDEngineAudioWrapper { } *)a1;
- (BOOL)queryRTVSafeSettingBoolValueForKey:(id)a0 defaultValue:(BOOL)a1;
- (id)rtvFeedContentControllers;
- (id)receivedCMDSet;
- (void)releaseCachedPlayer;
- (BOOL)__isUseNewReceiveMessageMethod;
- (BOOL)startPreloadPlayerIfNeeded:(id)a0;
- (void)messageSender:(id)a0 didReceiveMessage:(id)a1;
- (void)__configFeedMessageComponents;
- (BOOL)__finishPreloadPlayer;
- (void)__doPreloadPlayer;
- (id)__shareModelWithVoip:(id)a0;
- (id)__remotePlayViewControllerParams;
- (void)__handleReceiveCmdMessage:(id)a0;
- (void)interactionClient:(id)a0 didReceiveOperation:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
