@class AWELikeWorkViewController, NSString;

@interface AWELikeLandingPageViewController : UIViewController <AWEUserProfileTabVCDelegate, AWERouterViewControllerProtocol>

@property (retain, nonatomic) AWELikeWorkViewController *likeVC;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *preTabName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)userProfileTabVC:(id)a0 didScroll:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })contentOffsetOfCurrentVC;
- (double)maxBannerHeight;
- (id)userForTabVC;
- (double)userProfileTabHeight;
- (void)trackClientShowHomepageWithModel:(id)a0 tabType:(long long)a1 extraParams:(id)a2;
- (void)trackClickHomepageVideoCoverWithModel:(id)a0 tabType:(long long)a1 extraParams:(id)a2;
- (void)searchButtonClicked:(id)a0;
- (void)backBtnClicked:(id)a0;
- (void)trackSearchButtonClicked;
- (void).cxx_destruct;
- (id)init;
- (double)headerHeight;
- (void)viewDidLoad;

@end
