@class IESLiveDI, IESLiveMediaContainerContext, IESLiveExecutionContainer;

@interface IESLiveNewMediaPreviewViewController : UIViewController

@property (retain, nonatomic) IESLiveMediaContainerContext *context;
@property (retain, nonatomic) IESLiveExecutionContainer *executionContainer;
@property (retain, nonatomic) IESLiveDI *roomDI;

- (void)setupContainer;
- (id)initWithContainerContext:(id)a0;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
