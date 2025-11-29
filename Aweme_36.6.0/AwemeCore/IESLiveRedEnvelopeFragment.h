@class BoxListResponse_ResponseData, IESLiveShortTouchItem, HTSRedEnvelopeStore, NSString, HTSSmallRedEnvelopeView, IESLiveAnimatedImageView, NSMutableArray;
@protocol IESLiveSubscription, IESLiveURLSchemaHandler, HTSRedEnvelopeActions;

@interface IESLiveRedEnvelopeFragment : IESLiveRoomComponent <IESLiveRedEnvelopeReaction, HTSRedEnvelopeRouter, IESHYControllerDelegate>

@property (retain, nonatomic) HTSRedEnvelopeStore *store;
@property (retain, nonatomic) HTSSmallRedEnvelopeView *smallRedEnvelopeView;
@property (retain, nonatomic) IESLiveAnimatedImageView *animatedView;
@property (retain, nonatomic) id<HTSRedEnvelopeActions> redEnvelopeActionsCreator;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaURLHandler;
@property (retain, nonatomic) id<IESLiveSubscription> disposable;
@property (nonatomic) BOOL envelopeShowing;
@property (nonatomic) BOOL hasShownAuthToast;
@property (nonatomic) BOOL hasInsertItem;
@property (nonatomic) BOOL shortTouchInserted;
@property (retain, nonatomic) BoxListResponse_ResponseData *currentLynxShowingBoxData;
@property (retain, nonatomic) IESLiveShortTouchItem *shortTouchItem;
@property (nonatomic) BOOL autoShowRedEnvelope;
@property (retain, nonatomic) NSMutableArray *finishIds;
@property (nonatomic) long long heartbeatCode;
@property (retain, nonatomic) id<IESLiveSubscription> heartbeatDisposable;
@property (nonatomic) BOOL redEnvelopeClientRollBackEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationChanged:(long long)a0;
- (void)hideComponent;
- (void)showComponent;
- (void)remoteRoomDataReady:(id)a0;
- (void)iesHYControllerDidDismiss:(id)a0;
- (void)showRedEnvelopeViewWith:(id)a0;
- (void)tr_shortTaskBannerClick;
- (void)requestToShowNormalStateWithItem;
- (void)adjustToTempStateWidth;
- (void)tr_shortTaskBannerShowWithStatus:(BOOL)a0;
- (void)triggerTempStatusWithTempNumber:(id)a0;
- (void)showSendRedEnvelopeView;
- (void)updateRedEnvelopeTempStateFeature:(id)a0;
- (void)didRefreshGrabedUsersWithError:(id)a0;
- (void)registerClientABTest;
- (void)updateRedenvelope:(id)a0 completion:(id /* block */)a1;
- (void)showRedEnvelopeView;
- (void)showSmallRedEnvelopeView;
- (void)updateSmallRedEnvelopeRemainCountWith:(id)a0;
- (void)showLynxResultView:(id)a0;
- (void)showBunusLuckyBoxLynxView:(id)a0;
- (void)showLynxRedEnvelopeView:(id)a0;
- (void)finishOpenResultLuckyBox;
- (id)getLynxRedenvelopViwParms:(id)a0 isShowResult:(BOOL)a1;
- (void)tr_resultToastShowWithResult:(id)a0;
- (void)addObserverForLynxBoxData;
- (void)trackFroOpenRedEnvelopeWithType:(id)a0;
- (void)tr_shortTouchEnterRoomShow;
- (void)tr_showRedEnvelopeForNative;
- (void).cxx_destruct;
- (void)dealloc;

@end
