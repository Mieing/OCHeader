@class NSString, UIView, AWEHPChannelPageViewController, AWEFeedChannelObject;

@interface AWEHPChannelContainerViewController : UIViewController <AWEFeedTabItemViewControllerProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEFeedChannelObject *channelObject;
@property (retain, nonatomic) AWEHPChannelPageViewController *pageViewController;
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
- (id)initWithChannelObject:(id)a0 withPageViewController:(id)a1;
- (void)addContentViewController:(id)a0 needsLayout:(BOOL)a1;
- (BOOL)canRefresh;
- (void).cxx_destruct;
- (void)setScrollEnabled:(BOOL)a0;
- (void)play;
- (void)pause;
- (void)reload;
- (void)stop;
- (void)viewDidLoad;

@end
