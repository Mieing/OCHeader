@class NSMutableArray, IESLiveShortTouchItem, NSString, IESLiveRedEnvelopeLynxView, IESLiveCombineSubject;
@protocol IESLiveRoomService, IESLiveRedEnvelopeTraceActions;

@interface IESLiveLuckyBoxServiceManager : NSObject <HTSLiveMessageSubscriber, IESLiveShortTouchActions, IESLiveLuckyBoxBaseAbilityService, IESLiveRevenueDynamicService>

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) IESLiveRedEnvelopeLynxView *smallRedEnvelopeView;
@property (retain, nonatomic) IESLiveCombineSubject *tempSignal;
@property (retain, nonatomic) IESLiveShortTouchItem *shortTouchItem;
@property (retain, nonatomic) NSMutableArray *filterArray;
@property (retain, nonatomic) NSMutableArray *invocationArray;
@property (nonatomic) BOOL isShortTouchReady;
@property (retain, nonatomic) id<IESLiveRedEnvelopeTraceActions> traceActions;
@property (nonatomic) long long actionNumber;
@property (nonatomic) BOOL isFlag;
@property (nonatomic) BOOL isLoad;
@property (nonatomic) BOOL hasShownAuthToast;
@property (nonatomic) BOOL shouldLazyLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shortTouchIsReady;
- (void)bindService;
- (void)showNormalState;
- (void)adjustToTempStateWidth;
- (void)createLuckyBoxShortTouchItem:(id)a0 aniViewData:(id)a1 isShowEntranceAnimation:(BOOL)a2;
- (void)removeLuckyBoxShortTouchItem;
- (void)requestShowTempState:(id)a0;
- (id)getTempStateDuration:(id)a0;
- (void)activateIconFirst;
- (void)setDynamicIslandActivity:(id)a0 duration:(id)a1;
- (id)observeLuckyBoxShortTouchTempState;
- (void)updateDiamondCountForTempState:(id)a0;
- (void)openSendLuckyBoxView;
- (void)addShortTouchSelfLuckyBoxTrace:(id)a0;
- (void)subscribeBackend;
- (void)lazyLoad:(id)a0 isFromApi:(BOOL)a1;
- (BOOL)checkShortTouchStatus;
- (void)openGrabLuckyBoxView;
- (id)initWithRoom:(id)a0 isLazyLoad:(BOOL)a1;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
