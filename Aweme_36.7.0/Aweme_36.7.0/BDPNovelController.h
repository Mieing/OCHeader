@class BDPNovelControllerContext, BDPNovelContainerController, BDPNovelLoadingView;

@interface BDPNovelController : UIViewController

@property (retain, nonatomic) BDPNovelControllerContext *context;
@property (retain, nonatomic) BDPNovelContainerController *containerVC;
@property (retain, nonatomic) BDPNovelLoadingView *loadingView;

- (void)setupContainer;
- (void)addContainerView;
- (void)clearContainerVC;
- (void)refreshContainer;
- (void)setupHorizontalCurlController;
- (void)setupHorizontalSlideController;
- (void)setupVerticalController;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)hideLoadingView;

@end
