@class NSString, NSDictionary, AWEUserModel, UIViewController;

@interface AWEFavoriteDetailListViewController : UIViewController <BTMPageManagableProtocol, AWEProfileTabCustomProtocol, AWERouterViewControllerProtocol, AWEFavoriteSecondTabRedDotProtocol, AWETabListItemViewControllerProtocol>

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSDictionary *routerParams;
@property (copy, nonatomic) NSString *poiEmptyButtonText;
@property (copy, nonatomic) NSString *poiEmptyButtonSchema;
@property (copy, nonatomic) NSString *stickyPOIID;
@property (copy, nonatomic) NSString *stickyItemID;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *fixedPOIRecommendationList;
@property (nonatomic) long long clickIndex;
@property (nonatomic) BOOL bottomSheetDefaultOpen;
@property (nonatomic) BOOL forceFullScreen;
@property (nonatomic) BOOL isRecommend;
@property (copy, nonatomic) NSDictionary *trackerParams;
@property (weak, nonatomic) UIViewController *contentVC;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSString *mixIDs;
@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) BOOL isInLandingPage;
@property (nonatomic) BOOL isProfileExploreStyle;
@property (nonatomic) BOOL hasRedDotWhenSwitched;
@property (nonatomic) BOOL isInUserHomePage;
@property (nonatomic) double initHeight;
@property (nonatomic) double maxHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ reloadRightFixedArea;

+ (id)titleWithType:(unsigned long long)a0;

- (id)tabContentScrollView;
- (BOOL)configWithRouterParamDict:(id)a0;
- (id)bottomSpecialView;
- (struct CGSize { double x0; double x1; })bottomSpecialViewSize;
- (void)configBTMTracker;
- (void)p_backBtnClicked:(id)a0;
- (void)trackEnterDetailPage;
- (id)p_viewControllerWithType:(unsigned long long)a0;
- (BOOL)__fullScreenStyle:(unsigned long long)a0;
- (BOOL)isNewProfileStyleStatus;
- (BOOL)isArrowStyleStatus;
- (BOOL)isShootSameStyleStatus;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (void)viewDidLoad;

@end
