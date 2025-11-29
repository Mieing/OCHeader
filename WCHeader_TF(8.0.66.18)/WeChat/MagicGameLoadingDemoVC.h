@class UIView, MagicSclFrameSetView, MMUIButton;

@interface MagicGameLoadingDemoVC : MMUIViewController

@property (retain, nonatomic) MMUIButton *preloadButton;
@property (retain, nonatomic) MMUIButton *stopButton;
@property (retain, nonatomic) MMUIButton *startButton;
@property (retain, nonatomic) MMUIButton *appIdButton;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MagicSclFrameSetView *frameSetView;
@property (nonatomic) BOOL isResumed;
@property (retain, nonatomic) MMUIButton *startToPlayBtn;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } halfScreen;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fullScreen;

- (void)dealloc;
- (id)biz;
- (void)viewDidLoad;
- (void)setConfig:(id)a0 type:(unsigned long long)a1;
- (void)alert;
- (void)initStartToPlayBtn;
- (void)requestFullScreen;
- (void)layoutStartToPlayBtn;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidPopOrDismiss:(BOOL)a0;
- (void)start;
- (void)updateFrameSetData;
- (void)preload;
- (void)stop;
- (void).cxx_destruct;

@end
