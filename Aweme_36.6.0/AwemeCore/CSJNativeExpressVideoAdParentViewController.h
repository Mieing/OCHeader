@class CSJMaterialMeta, UIView;
@protocol CSJLoadingPageProtocol;

@interface CSJNativeExpressVideoAdParentViewController : UIViewController

@property (nonatomic) unsigned long long systemOrientation;
@property (nonatomic) unsigned long long videoOrientation;
@property (retain, nonatomic) UIView<CSJLoadingPageProtocol> *loadingPageView;
@property (nonatomic) BOOL isShowLoadingAnimaition;
@property (nonatomic) BOOL isRotate;
@property (nonatomic) BOOL supportPortraitLandscape;
@property (retain, nonatomic) CSJMaterialMeta *materialMeta;
@property (nonatomic) BOOL isExpress;

- (void)removeLoading;
- (BOOL)supportLandscapeBySystemConfiguration;
- (void)pbu_addLoading;
- (void)layoutIntersitialStyle;
- (unsigned long long)pbu_express_supportedInterfaceOrientations;
- (unsigned long long)pbu_normal_supportedInterfaceOrientations;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)prefersStatusBarHidden;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
