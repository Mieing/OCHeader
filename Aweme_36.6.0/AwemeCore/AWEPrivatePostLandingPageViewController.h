@class NSString, UIViewController;
@protocol AWEPrivatePostsViewControllerProtocol;

@interface AWEPrivatePostLandingPageViewController : UIViewController <AWEUserProfileTabVCDelegate, AWERouterViewControllerProtocol>

@property (retain, nonatomic) UIViewController<AWEPrivatePostsViewControllerProtocol> *privateVC;
@property (nonatomic) BOOL isViewDidAppear;
@property (nonatomic) BOOL isFromHome;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL isSplitScreen;
@property (copy, nonatomic) NSString *currentItemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)userProfileTabVC:(id)a0 didScroll:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })contentOffsetOfCurrentVC;
- (double)maxBannerHeight;
- (id)userForTabVC;
- (double)userProfileTabHeight;
- (void)backBtnClicked:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (double)headerHeight;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
