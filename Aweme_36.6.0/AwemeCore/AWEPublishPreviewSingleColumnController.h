@class AWEPublishPreviewContainerController, UIView, AWEPublishPreviewConfig;
@protocol AWEPublishPreviewViewProtocol;

@interface AWEPublishPreviewSingleColumnController : UIViewController

@property (retain, nonatomic) AWEPublishPreviewConfig *config;
@property (weak, nonatomic) AWEPublishPreviewContainerController *containerVC;
@property (retain, nonatomic) UIView<AWEPublishPreviewViewProtocol> *publishPreviewView;

- (id)initWithConfig:(id)a0 containerVC:(id)a1;
- (void)configPublishPreviewView;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
