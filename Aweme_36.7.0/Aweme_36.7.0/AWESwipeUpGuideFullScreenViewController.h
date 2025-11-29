@class NSString, LOTAnimationView, UIImageView, UIScrollView, UILabel, UITableView;

@interface AWESwipeUpGuideFullScreenViewController : UIViewController <UIScrollViewDelegate, AWESwipeUpGuideViewControllerProtocol>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) struct CGPoint { double x; double y; } originOffSet;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) LOTAnimationView *imageView;
@property (nonatomic) double lastContentOffset;
@property (nonatomic) BOOL isPresentCompleted;
@property (nonatomic) BOOL hasFinishedSwipeUp;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (nonatomic) double maxHightInOneGlide;
@property (nonatomic) BOOL isDissmissByMaxHight;
@property (nonatomic) BOOL isSlideToNext;
@property (retain, nonatomic) UIImageView *mainLabelIconView;
@property (retain, nonatomic) UILabel *mainLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL enableGuideEnhance;

- (void)reloadUI;
- (void)_appDidBecomeActive;
- (BOOL)isRecommendedFeed;
- (void)animateSwipeUpInfoLabelIfNeeded;
- (void)dismissWithGestureByScrollView:(id)a0;
- (void)showSwipeUpGuideOnTableView:(id)a0;
- (void)dismissSwipeUpGuideManager;
- (void)dismiss;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)registerNotifications;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setupUI;

@end
