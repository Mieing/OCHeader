@class AWESearchEventDispather, AWESearchStandardVideoPlayerComponentModel, NSDictionary, NSString, NSMutableArray;
@protocol AWESearchStandardVideoPlayerComponentProvider, AWESearchPlayStatusBarComponentProvider, AWESearchPaidTagComponentProvider, AWESearchContainerProtocol, AWESearchComponentProtocol;

@interface AWESearchStandardVideoPlayerPaidComponent : AWESearchComponent <AWESearchStandardVideoPlayerPaidComponentProvider>

@property (retain, nonatomic) AWESearchStandardVideoPlayerComponentModel *model;
@property (retain, nonatomic) NSMutableArray *receiveProtocolArray;
@property (weak, nonatomic) id<AWESearchPlayStatusBarComponentProvider> playStatusBarProvider;
@property (weak, nonatomic) id<AWESearchPaidTagComponentProvider> paidTagProvider;
@property (weak, nonatomic) id<AWESearchStandardVideoPlayerComponentProvider> playerProvider;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (copy, nonatomic) NSDictionary *dictLogExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL hidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isIAPPaymentVideo:(id)a0;
+ (BOOL)isPaidWithAweme:(id)a0;

- (void)playerPlayTime:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2;
- (void)didPaymentVideoPreviewEnd;
- (void)didRewardAdvertiseVideoPreviewEnd;
- (void)componentDidLoad;
- (id)paymentSpuType:(id)a0;
- (id)paymentEpisodeID:(id)a0;
- (id)paymentEpisodeRank:(id)a0;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewDidStartShowing;
- (id)receiveProtocolList;
- (void)addObserverForPaymentVideoIfNeeded;
- (void)updateWithPaidAwemeModel:(id)a0;
- (void)interactorDidClick;
- (BOOL)p_isUnpaidPaymentVideo;
- (BOOL)p_isUnlockRewardAdvertiseVideo;
- (void)updatePaidTagComponentWithPlayerModel:(id)a0;
- (void)updatePlayStatusBarHidden;
- (void)trackEventForPaymentVideoIfNeededWithEvent:(id)a0 logData:(id)a1 extraLogData:(id)a2;
- (id)paidDefaltParams;
- (void).cxx_destruct;

@end
