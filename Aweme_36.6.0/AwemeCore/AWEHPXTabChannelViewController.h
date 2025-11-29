@class NSArray, AWEHPXTabChannelManager, NSString, UIView, AWEHPChannelPageViewController;

@interface AWEHPXTabChannelViewController : UIViewController <AWEFeedTabItemViewControllerProtocol, AWEHPXTabUIDelegate, AWEHPCommonTabUIDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEHPChannelPageViewController *channelViewController;
@property (nonatomic) long long playState;
@property (nonatomic) double marginTop;
@property (retain, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) AWEHPXTabChannelManager *manager;
@property (retain, nonatomic) NSArray *itemsArray;
@property (nonatomic) BOOL isShowTopDormerView;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transition_didPopDoneTransitionWithContext:(id)a0;
- (void)pauseWithAnimation;
- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)transition_didStartTransitionWithContext:(id)a0;
- (BOOL)transition_gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)currentAweme;
- (void)setAccessoriesHidden:(BOOL)a0;
- (void)animatedRefreshWithCompletion:(id /* block */)a0;
- (BOOL)currentTabIsTop;
- (void)cancelRefresh;
- (void)seekPlayTimeWithItemID:(id)a0;
- (void)onAwemeMarkDislikeCanWithdraw:(id)a0;
- (void)onAwemeDeleted:(id)a0 isDislike:(BOOL)a1;
- (void)onAwemeDeleted:(id)a0 isLiveFinish:(BOOL)a1 isDislike:(BOOL)a2;
- (void)setRefreshMethod:(id)a0;
- (id)currentAwemeID;
- (void)feedRefreshWithType:(long long)a0 completion:(id /* block */)a1;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (BOOL)transition_enableCustomActionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)transition_performCustomActionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (BOOL)transition_shouldStartInteractiveTranstionToVC:(id)a0;
- (void)transition_didCancelPercentDrivenTransitionWithContext:(id)a0;
- (void)transition_addDisappearBlock:(id /* block */)a0 forKey:(id)a1;
- (void)transition_didChangePercentDrivenTransitionWithContext:(id)a0;
- (id)getCurrentChannelController;
- (void)channelManager:(id)a0 removeChannel:(id)a1 selectedChannel:(id)a2;
- (void)channelManager:(id)a0 switchSelectedChannelFrom:(id)a1 to:(id)a2 config:(id)a3;
- (void)channelManager:(id)a0 updateXTabThemeStyleWithChannel:(id)a1;
- (void)updateCurrentChannelTopBarMask;
- (void)addContentViewController:(id)a0 needsLayout:(BOOL)a1;
- (void)switchChannelViewController:(id)a0 animateType:(long long)a1;
- (void)removeContentViewController:(id)a0;
- (BOOL)canRefresh;
- (void).cxx_destruct;
- (void)setScrollEnabled:(BOOL)a0;
- (void)play;
- (void)pause;
- (void)reload;
- (id)init;
- (void)stop;
- (void)viewDidLoad;

@end
