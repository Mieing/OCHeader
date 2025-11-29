@class UIView, NSString, UIImage, AWESearchScanPicAIManager, UIImageView, AWESearchScanResultLoadingView, AWESearchScanDataContext, UIViewController;
@protocol AWESearchScanChildProtocol, _TtP9AWELottie13AWELottieView_;

@interface AWESearchScanViewController : UIViewController <AWERouterViewControllerProtocol, AWESearchScanVCProtocol>

@property (retain, nonatomic) UIViewController<AWESearchScanChildProtocol> *contentView;
@property (retain, nonatomic) UIView *popoverBackground;
@property (retain, nonatomic) UIView *popoverContainer;
@property (retain, nonatomic) AWESearchScanResultLoadingView *loadingView;
@property (nonatomic) BOOL hasJumpToResultVC;
@property (retain, nonatomic) UIImage *goodsImage;
@property (retain, nonatomic) UIView<_TtP9AWELottie13AWELottieView_> *lottieView;
@property (retain, nonatomic) AWESearchScanPicAIManager *scanPicAIManager;
@property (nonatomic) double qrCodeMaxDur;
@property (retain, nonatomic) UIImageView *maskImageView;
@property (retain, nonatomic) AWESearchScanDataContext *dataContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)visionSearchTosidReuse;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)dismissLoadingView;
- (id)initWithDataContext:(id)a0;
- (void)tapToDismissPopover;
- (void)forbidContentInteraction;
- (void)resumeContentInteraction;
- (void)setupLottieView;
- (id)debug_filterRouterParamsWith:(id)a0;
- (void)debug_checkDiffRouterParamsWith:(id)a0;
- (BOOL)enableVisionSearchImageCompressBlock;
- (BOOL)isPresentVC;
- (void)checkSearchImageNil:(id)a0;
- (void)updateDataContext;
- (void)updateCustomScanConfig;
- (void)trackStartClientEmptySearch;
- (void)addSetupImagePreProcess;
- (BOOL)questionIntentionDetect;
- (void)questionImageRotateIfNeed;
- (void)setupOCRPreProcess;
- (void)removeSetupImagePreProcess;
- (void)presentContentViewAsPopover;
- (void)startVisionRequestAndQRCodeDetect;
- (void)trackEndClientEmptySearch;
- (void)startVisionRequest;
- (id)scanQRCodeEnterFrom:(id)a0;
- (BOOL)needCheckQRCodeWithImage:(id)a0;
- (void)trackQRCodePerformanceTimeCost:(id)a0 isQRCode:(BOOL)a1;
- (void)trackQRCodeMonitor;
- (void)exitScanPageWithCompletion:(id /* block */)a0;
- (void)jumpToResultVC:(id)a0;
- (void)startFirstVisionRequestWithResultVC:(id)a0;
- (BOOL)shouldHideLoadingAnimation;
- (void)trackPicAIWithModel:(id)a0 scene:(id)a1;
- (void)setupImagePreProcess;
- (void).cxx_destruct;
- (void)dismissPopover;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)showLoadingView;

@end
