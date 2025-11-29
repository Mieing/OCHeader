@class NSString, NSArray, NSDictionary, AWESlidingTabbarView, AWELiveAcqCastVideoSearchUserController, AWELiveAcqCastVideoSearchVideoController, AWELiveAcqCastSearchLiveStreamViewController, AWELiveAcqSlidingViewController;
@protocol AWELiveAcqCastVideoViewModelProtocol;

@interface AWELiveAcqSearchResultView : UIView <AWESlidingViewControllerDelegate>

@property (nonatomic) long long currentSelectedIndex;
@property (copy, nonatomic) NSString *keyword;
@property (retain, nonatomic) AWELiveAcqCastVideoSearchUserController *searchUserViewController;
@property (retain, nonatomic) AWELiveAcqCastVideoSearchVideoController *searchVideoViewController;
@property (retain, nonatomic) AWELiveAcqCastSearchLiveStreamViewController *liveStreamViewController;
@property (retain, nonatomic) AWELiveAcqSlidingViewController *slidingVC;
@property (retain, nonatomic) AWESlidingTabbarView *tabView;
@property (retain, nonatomic) id<AWELiveAcqCastVideoViewModelProtocol> viewModel;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSArray *tabDataArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1 transitionType:(long long)a2;
- (void)updateKeyword:(id)a0 trackParams:(id)a1;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)setupUI;

@end
