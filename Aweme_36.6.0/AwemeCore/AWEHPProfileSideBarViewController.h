@class AWEHPProfileSideBarControllerManager, UIImageView, NSString, UIView, AWEHPListKitViewController;
@protocol AWEHPProfileSideBarViewControllerDelegate;

@interface AWEHPProfileSideBarViewController : UIViewController <UIScrollViewDelegate, AWEProfileSettingSliderSourceContextProvider, BTMPageManagableProtocol, AWEProfileSettingSliderViewControllerProtocol>

@property (retain, nonatomic) UIImageView *tabBarImageView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *accessibilityView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *bottomContentView;
@property (retain, nonatomic) UIView *morePageView;
@property (nonatomic) long long morePageSection;
@property (retain, nonatomic) AWEHPProfileSideBarControllerManager *contentManager;
@property (retain, nonatomic) AWEHPProfileSideBarControllerManager *bottomManager;
@property (retain, nonatomic) AWEHPProfileSideBarControllerManager *morePageManager;
@property (retain, nonatomic) AWEHPListKitViewController *contentViewController;
@property (retain, nonatomic) AWEHPListKitViewController *bottomViewController;
@property (retain, nonatomic) AWEHPListKitViewController *morePageViewController;
@property (weak, nonatomic) id<AWEHPProfileSideBarViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ isShowSliderMenuBlock;

+ (double)sliderMenuWidth;

- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (void)awe_themeReload;
- (BOOL)btm_notPageHolder;
- (void)dismissSideBarViewController;
- (void)reloadAllListIfNeed;
- (id)initWithContentManager:(id)a0 withBottomManager:(id)a1;
- (void)enterMoreFunctionPageWithManager:(id)a0;
- (void)quitMoreFunctionPage;
- (void)dismissAnimation:(id)a0;
- (BOOL)isShowSliderMenuView;
- (void)updateTabBarImageView:(id)a0;
- (void)updateViewsWithOriginX:(double)a0;
- (void).cxx_destruct;
- (void)dismissWithAnimation:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
