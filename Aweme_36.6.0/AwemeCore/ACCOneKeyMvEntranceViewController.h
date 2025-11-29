@class ACCSlidingTabbarView, RACDisposable, ACCOneKeyMvEntranceView, NSString, AWEVideoPublishViewModel, ACCWaterfallViewController, UIButton;
@protocol ACCWaterfallTabContentProviderProtocol;

@interface ACCOneKeyMvEntranceViewController : UIViewController <ACCOneKeyMvEntranceViewDelegate, ACCWaterfallContentScrollDelegate>

@property (retain, nonatomic) ACCOneKeyMvEntranceView *oneKeyMvEntranceView;
@property (retain, nonatomic) ACCSlidingTabbarView *slidingTabView;
@property (retain, nonatomic) ACCWaterfallViewController *currentContentVc;
@property (retain, nonatomic) id<ACCWaterfallTabContentProviderProtocol> contentProvider;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) RACDisposable *contentOffsetDisposable;
@property (retain, nonatomic) UIButton *oneKeyMvEntranceButton;
@property (nonatomic) unsigned long long bannerStatus;
@property (nonatomic) long long currentSelectedIndex;
@property (nonatomic) BOOL canHandle;
@property (nonatomic) BOOL isUp;
@property (nonatomic) double oneKeyMvButtonFinalY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)slidingTabView:(id)a0 contentProvider:(id)a1;

- (void)waterfallScrollViewDidScroll:(id)a0 viewController:(id)a1;
- (void)waterfallScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1 viewController:(id)a2;
- (void)waterfallScrollViewDidEndDecelerating:(id)a0 viewController:(id)a1;
- (void)registerOneKeyButton:(id)a0 finalY:(double)a1;
- (void)jumpToAlbumPage:(id)a0;
- (void)prepareView;
- (id)initWithSlidingTabView:(id)a0 contentProvider:(id)a1;
- (void)updateScrollDirection:(BOOL)a0;
- (void)updateOneKeyMvViewSoftly:(double)a0;
- (void)updateOneKeyMvViewPosition:(double)a0 animated:(BOOL)a1;
- (void)handleIfChangeIndex:(long long)a0 vc:(id)a1;
- (void)handleEntranceViewByContentOffset:(struct CGPoint { double x0; double x1; })a0 selectedIndex:(long long)a1 vc:(id)a2;
- (void)updateOneKeyMvButtonStatus:(double)a0 animated:(BOOL)a1;
- (void)updateOneKeyEntranceBannerStatus:(double)a0;
- (void)setupUpdateContentOffsetBlock:(id)a0;
- (void)handleButtonClicked;
- (void).cxx_destruct;
- (void)addObserver;
- (void)viewDidLoad;

@end
