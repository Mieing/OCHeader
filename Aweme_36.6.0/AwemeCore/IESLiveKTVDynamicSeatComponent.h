@class UIView, NSString, HTSEventForwardingView, IESLiveKTVComponentContext, IESLiveGCDTimer, NSMutableDictionary, IESLiveKTVCommonStore, IESLiveRealTimeChorusUIInfo, NSMutableSet, NSNumber, HTSLiveLinkmicRealTimeChorusStage;
@protocol IESLiveCompoundSubscription, IESHYContainerProtocol, IESLiveInteractionLinkerUserService;

@interface IESLiveKTVDynamicSeatComponent : IESLiveInteractComponentBase <IESLiveKTVActions, HTSLiveMessageSubscriber, IESLiveDataSyncDelegate, IESLiveIMDataSyncDelegate, IESLiveInteractionLinkerServiceAction, IESHYHybridViewLifecycleProtocol>

@property (weak, nonatomic) IESLiveKTVComponentContext *ktvContext;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *lynxView;
@property (retain, nonatomic) HTSEventForwardingView *container;
@property (weak, nonatomic) IESLiveKTVCommonStore *commonStore;
@property (copy, nonatomic) NSString *seatUrl;
@property (nonatomic) double topHeight;
@property (copy, nonatomic) NSString *currentSingName;
@property (retain, nonatomic) NSNumber *currentSongId;
@property (nonatomic) BOOL needUpdate;
@property (retain, nonatomic) IESLiveRealTimeChorusUIInfo *lastChorusInfo;
@property (nonatomic) BOOL hasFeedUpdate;
@property (nonatomic) BOOL hasGuestListUpdate;
@property (nonatomic) int guestListCount;
@property (copy, nonatomic) NSString *currentLoginUserId;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *lynxGuestView;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) IESLiveGCDTimer *waveTimer;
@property (retain, nonatomic) NSMutableDictionary *waveMap;
@property (retain, nonatomic) NSMutableSet *curList;
@property (nonatomic) BOOL chorusGuestLinkmicEnable;
@property (weak, nonatomic) id<IESLiveInteractionLinkerUserService> usersManager;
@property (retain, nonatomic) HTSLiveLinkmicRealTimeChorusStage *restoreStage;
@property (nonatomic) long long lastSentenceIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (void)subscribedSyncDataWithValue:(id)a0 version:(long long)a1;
- (void)subscribedSyncDataUpdatedWithValue:(id)a0 oldVersion:(long long)a1 newVersion:(long long)a2;
- (void)didSetAttachingDIContext;
- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)closeTimer;
- (void)createLynxView;
- (void)setupObserver;
- (void)interactionLinkerService:(id)a0 interactListDidChangeFrom:(id)a1 to:(id)a2;
- (void)didStartPlayMusicWithMusicID:(id)a0;
- (void)didStopPlayMusicWithMusicID:(id)a0 finished:(BOOL)a1;
- (void)didKTVIMOrderListChanged;
- (void)didUpdateKTVStageState:(unsigned long long)a0;
- (void)dispatchWRDSMsg:(id)a0;
- (void)setupLynxSeatView;
- (void)setupLynxGuestSeatView;
- (void)removeDisposable;
- (void)fileLynxMusicInfoUpdate;
- (void)openTimer;
- (void)updateGuestTalking:(id)a0;
- (void)updateChorusStageWith:(id)a0;
- (void)fileLynxUpdateSingState:(BOOL)a0;
- (void)addObserverTaking:(id)a0;
- (id)observeTalking:(id)a0;
- (void)sendToLynxWaveStatus:(id)a0 isTalking:(BOOL)a1;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
