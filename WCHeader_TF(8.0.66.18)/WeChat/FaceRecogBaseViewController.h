@class FaceRecogBaseView;

@interface FaceRecogBaseViewController : MMUIViewController

@property (retain, nonatomic) FaceRecogBaseView *baseView;
@property (nonatomic) BOOL bUseBlackStatusbar;

- (id)init;
- (BOOL)useBlackStatusbar;
- (BOOL)useTransparentNavibar;
- (void)viewDidLoad;
- (void)viewDidBePresented:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidBeInteractivePoped;
- (void)viewDidLayoutSubviews;
- (void)attachPreviewLayer:(id)a0;
- (void)procedureDidFinish;
- (void)procedureDidFailed:(id)a0 errorTips:(id)a1 canRetry:(BOOL)a2;
- (void)viewDidTransitionToNewSize;
- (void)onNavBack;
- (long long)overrideUserInterfaceStyle;
- (void).cxx_destruct;

@end
