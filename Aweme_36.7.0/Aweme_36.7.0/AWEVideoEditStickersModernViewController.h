@class UIView, ACCSlidingViewController, NSArray, ACCSlidingTabbarView, ACCStickerPannelUIConfig, ACCStickerPannelDataConfig, NSString, ACCVideoEditStickerDataController;
@protocol ACCStickerPannelLogger, AWEVideoEditStickersVCDelegate, ACCStickerPannelFilter;

@interface AWEVideoEditStickersModernViewController : ACCStickerPannelAnimationVC <ACCSlidingViewControllerDelegate, ACCVideoEditStickerTabViewControllerDelegate, AWEVideoEditStickerVCProtocol>

@property (retain, nonatomic) ACCSlidingViewController *slidingViewController;
@property (retain, nonatomic) ACCSlidingTabbarView *slidingTabbarView;
@property (copy, nonatomic) NSArray *categories;
@property (copy, nonatomic) NSArray *titles;
@property (copy, nonatomic) NSArray *icons;
@property (copy, nonatomic) NSArray *tabVCs;
@property (copy, nonatomic) NSArray *tabDatas;
@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIView *errorView;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) unsigned long long currentIndex;
@property (retain, nonatomic) ACCVideoEditStickerDataController *dataController;
@property (nonatomic) BOOL useTabIcon;
@property (weak, nonatomic) id<AWEVideoEditStickersVCDelegate> delegate;
@property (retain, nonatomic) ACCStickerPannelUIConfig *uiConfig;
@property (retain, nonatomic) ACCStickerPannelDataConfig *dataConfig;
@property (retain, nonatomic) id<ACCStickerPannelLogger> logger;
@property (retain, nonatomic) id<ACCStickerPannelFilter> pannelFilter;
@property (nonatomic) BOOL skipMineCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didFinishTransitionToIndex:(unsigned long long)a1;
- (void)dismissPanel;
- (void)modernStickerCollectionVC:(id)a0 didSelectStickerCategory:(id)a1 atIndex:(long long)a2 downloadProgressBlock:(id /* block */)a3 downloadedBlock:(id /* block */)a4;
- (void)buildTopPullLine;
- (void)buildSlideUI;
- (void)buildErrorView;
- (void)fetchBasicData;
- (void)trackerApplyDuration:(double)a0 type:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)accessibilityPerformEscape;

@end
