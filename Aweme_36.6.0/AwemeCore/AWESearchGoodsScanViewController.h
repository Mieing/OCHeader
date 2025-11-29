@class NSString, UIImage, NSURL, UIImageView, UIButton, AWESearchPhotoSearchSevenSplitViewController, AWEUILoadingView, UIViewController, LOTAnimationView, NSDictionary, AWEEcomSearchRouterModel;
@protocol AWEEcomImageSearchViewControllerProtocol;

@interface AWESearchGoodsScanViewController : UIViewController

@property (retain, nonatomic) UIImage *goodsImage;
@property (retain, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) UIImageView *searchImageView;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIViewController<AWEEcomImageSearchViewControllerProtocol> *searchResultVC;
@property (retain, nonatomic) AWESearchPhotoSearchSevenSplitViewController *sevenSplitVC;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *controlUIParameters;
@property (nonatomic) double startTime;
@property (copy, nonatomic) NSString *uniqueId;
@property (nonatomic) BOOL delayShown;
@property (nonatomic) BOOL resultPageShown;
@property (retain, nonatomic) AWEEcomSearchRouterModel *routerModel;
@property (weak, nonatomic) UIViewController *fromVC;

+ (id)viewControllerWithGoodsImage:(id)a0 extra:(id)a1;
+ (void)invokePreRequestWithParams:(id)a0 image:(id)a1 URLString:(id)a2;
+ (id)parseUIParameters:(id)a0;
+ (id)mapEnterFromForOrderList:(id)a0;
+ (BOOL)isFromTopPicOrScreenShot:(id)a0;
+ (id)parseParams:(id)a0;
+ (BOOL)isEnableShownDelayWithParams:(id)a0;
+ (BOOL)isFullPage:(id)a0;
+ (double)autoShowDelayTimeWithParams:(id)a0;
+ (BOOL)enablePanBack:(id)a0;

- (BOOL)configWithRouterParamDict:(id)a0;
- (id)searchEntrance;
- (long long)resultPanelPattern;
- (BOOL)isFindSimilarCase;
- (BOOL)isProductCardFindSimilar;
- (BOOL)forbidBackgroundAnimate;
- (BOOL)forbidFirstEnterAnim;
- (double)floatScreen;
- (void)updateWithParamDict:(id)a0;
- (void)didScreenShotSaved:(id)a0;
- (void)searchImage;
- (void)startPhotoSearchMonitor;
- (void)resolveMatryoshka;
- (BOOL)isSimProduct;
- (BOOL)interactOptimiseEnable;
- (id)remakeImageURLIfNeeded:(id)a0;
- (BOOL)isHalfPageToFullPage;
- (BOOL)isFromPriceCompareOrOderList;
- (long long)hasRecognitionAnim;
- (void)searchImageWithForbidBackgroundAnimate;
- (void)showSearchResultPage;
- (void)setMoveInAnimation;
- (long long)resultPanelAnim;
- (id)transitionWithType:(long long)a0;
- (BOOL)showEnterToast;
- (BOOL)isFromOrderList;
- (BOOL)is618BigPromotion;
- (BOOL)isFromTitleFindSame;
- (void)pop;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)init;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)setupUI;

@end
