@class NSString, UIView;
@protocol IESLiveCompoundSubscription, IESHYContainerProtocol;

@interface IESLiveRevenueInteractPlayComponentBreakthroughTopBar : IESLiveRevenueInteractPlayComponent <IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *topBarView;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> countdownDispose;
@property (nonatomic) BOOL topBarDidLoad;
@property (nonatomic) BOOL enableUpdateScore;
@property (nonatomic) BOOL needRefresh;
@property (nonatomic) BOOL needNotifyFinish;
@property (nonatomic) unsigned long long currentScore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)setupAction;
- (void)componentDidLoad;
- (void)componentContainerFrameChanged;
- (void)updateRemainTime:(id)a0;
- (id)appendQueryURLWithBaseUrl:(id)a0;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)componentFinished;
- (void)componentInteracting;
- (void)invokeNotificationEventWithParams:(id)a0;
- (void)componentDidUpdateBattleView;
- (BOOL)isSceneGiftPK;
- (void)onReceivedLinkmicMethodMessage:(id)a0;
- (void)loadTopBarView;
- (void)notifyBreakthroughFinished;
- (void)updateTopBarFrame;
- (void)refreshTopBar;
- (id)buildLynxData:(BOOL)a0;
- (id)buildPKInfo;
- (void).cxx_destruct;
- (void)clear;
- (void)setup;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentFrame;

@end
