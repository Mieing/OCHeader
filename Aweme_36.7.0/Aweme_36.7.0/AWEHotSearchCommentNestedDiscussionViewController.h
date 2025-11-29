@class AWESlidingViewController, AWEHotSearchCommentFeedViewController, AWESlidingTabbarView, AWEHotSearchCommentFeedPageContext, NSString, UIViewController;
@protocol AWECommonFeedDelegate;

@interface AWEHotSearchCommentNestedDiscussionViewController : UIViewController <AWESlidingViewControllerDelegate>

@property (retain, nonatomic) AWESlidingTabbarView *slidingTabBar;
@property (retain, nonatomic) AWESlidingViewController *contentSlidingVC;
@property (retain, nonatomic) AWEHotSearchCommentFeedViewController *defaultFeedVC;
@property (retain, nonatomic) AWEHotSearchCommentFeedViewController *latestFeedVC;
@property (retain, nonatomic) AWEHotSearchCommentFeedPageContext *context;
@property (weak, nonatomic) UIViewController<AWECommonFeedDelegate> *containerVC;
@property (copy, nonatomic) id /* block */ updateInputViewContextBlock;
@property (copy, nonatomic) id /* block */ tabChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didFinishTransitionFromPreviousIndex:(long long)a1 currentIndex:(long long)a2 transitionType:(long long)a3;
- (id)currentFeedVC;
- (void)p_configUI;
- (void)p_prepareTabs;
- (id)getFeedVCWithType:(long long)a0;
- (void)switchTabWithType:(long long)a0;
- (id)slidingChildVCs;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end
