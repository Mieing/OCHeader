@class NSString, IESLiveMultiOrderSingManager, IESLiveMultiOrderSingMVManagerAdapter, NSNumber;
@protocol IESLiveInteractionLinkerService, IESLiveInteractionLinkerMediaService, IESLiveMultiUserScenarioMonitor, IESLiveRealStreamingProvider;

@interface IESLiveInteractOrderSingComponent : IESLiveInteractComponentBase <IESLiveMultiOrderSingRouter, HTSLiveMessageSubscriber, IESLiveInteractionLinkerServiceAction, IESLiveDataSyncDelegate, IESLiveSocialInteractAction>

@property (retain, nonatomic) IESLiveMultiOrderSingManager *orderSingManager;
@property (retain, nonatomic) IESLiveMultiOrderSingMVManagerAdapter *mvManagerAdapter;
@property (nonatomic) BOOL willUseOrderSingUpgrade;
@property (nonatomic) BOOL orderSingStageIsReady;
@property (weak, nonatomic) id<IESLiveInteractionLinkerMediaService> mediaManager;
@property (nonatomic) BOOL isPcPushVideoStream;
@property (retain, nonatomic) NSNumber *shouldBanisPcPushVideoStream;
@property (weak, nonatomic) id<IESLiveInteractionLinkerService> linker;
@property (weak, nonatomic) id<IESLiveRealStreamingProvider> streamProvider;
@property (weak, nonatomic) id<IESLiveMultiUserScenarioMonitor> monitor;
@property (nonatomic) BOOL audioPlayerShouldShow;
@property (nonatomic) BOOL is2DAvatarForCurrentEnlarge;
@property (retain, nonatomic) NSString *avatarStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (void)subscribedSyncDataWithValue:(id)a0 version:(long long)a1;
- (void)subscribedSyncDataUpdatedWithValue:(id)a0 oldVersion:(long long)a1 newVersion:(long long)a2;
- (void)currentLayoutUIDidReload;
- (void)startMultiOrderSingIfNeeded:(id)a0 inLiveRoom:(BOOL)a1;
- (BOOL)enableMultiOrderSingEntrance;
- (BOOL)isMultiOrderSingOpen;
- (BOOL)enableShowOrderSingDressEntrance;
- (void)showMultiOrderSingPanelFrom:(id)a0;
- (id)getGiftPanelTrackParamsWithUser:(id)a0 giftID:(long long)a1;
- (id)getMultiOrderSingTrackParamsWithSource:(id)a0;
- (void)openMVSelectPanelWithItemID:(id)a0;
- (void)notifyOrderSingStageReadyStatus:(BOOL)a0;
- (void)exitMultiOrderSingModeWithSource:(id)a0;
- (void)checkMultiOrderSingModeOpenStatusWithPlayModeArray:(id)a0;
- (BOOL)isPcStreaming;
- (void)interactionLinkerService:(id)a0 interactListDidChangeFrom:(id)a1 to:(id)a2;
- (void)interactionLinkerServiceInteractDidStart:(id)a0;
- (void)componentBindContext;
- (void)logWithDescription:(id)a0 info:(id)a1;
- (void)checkIfOrderSingPcIsStreaming;
- (BOOL)currentPcIsSreaming;
- (BOOL)enableAudioChatRoomCustomizeStreaming;
- (void)componentDidChangedFromLayout:(id)a0 toLayout:(id)a1;
- (BOOL)customizeStreamModeOpen;
- (void)dispatchWRDSMsg:(id)a0;
- (id)visualType;
- (BOOL)currentLayoutEnableAvatarOrPCStreaming;
- (void)fetchOrderSingPlayModeInfoIfNeed;
- (void)reportChangeToLynx:(id)a0;
- (void)startOrEndPcStreaming:(BOOL)a0;
- (BOOL)currentEnlargeSeatIsVideo:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (id)isVisual;

@end
