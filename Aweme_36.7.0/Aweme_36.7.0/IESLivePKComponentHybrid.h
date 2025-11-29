@class RACDisposable, NSString, UIView;
@protocol IESLiveCompoundSubscription, IESHYContainerProtocol;

@interface IESLivePKComponentHybrid : IESLiveRevenueInteractPlayComponent <IESLivePKStateAction, IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *pkHybridView;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) RACDisposable *receiveDisposable;
@property (nonatomic) BOOL inSprintTime;
@property (nonatomic) BOOL isDelayTeamTaskMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)setupAction;
- (void)componentContainerFrameChanged;
- (void)didChangePKStateFrom:(long long)a0 to:(long long)a1;
- (id)appendQueryURLWithBaseUrl:(id)a0;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)componentFinished;
- (void)componentInteracting;
- (void)componentDidClear:(BOOL)a0;
- (void)loadPKHybridView;
- (BOOL)needChangeHybridSuperView;
- (void)onReceivedBattleTeamTaskMessage:(id)a0;
- (void)invokeNotificationEventWithParams:(id)a0;
- (id)trackPKBattleHybridMessage;
- (id)queryURLItems;
- (void)invokeConsecutiveWinNotificationIfNeeded;
- (void).cxx_destruct;
- (void)clean;

@end
