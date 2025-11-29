@class NSString, UIView, MMUIButton, _TtC25MagicCardStarterProtocols22MagicCardStarterHandle;

@interface EcsMagicNativeStarterDemoViewControlller : MMUIViewController

@property (retain, nonatomic) MMUIButton *preloadButton;
@property (retain, nonatomic) MMUIButton *stopButton;
@property (retain, nonatomic) MMUIButton *startButton;
@property (retain, nonatomic) MMUIButton *notifyButton;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } halfScreen;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fullScreen;
@property (retain, nonatomic) NSString *frameSetName;
@property (retain, nonatomic) NSString *frameSetDataStr;
@property (retain, nonatomic) _TtC25MagicCardStarterProtocols22MagicCardStarterHandle *starterHandle;

- (void)dealloc;
- (void)viewDidLoad;
- (id)getCardStyle;
- (void)requestFullScreen;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidPopOrDismiss:(BOOL)a0;
- (void)commonStart;
- (void)commonBindView;
- (void)commonStop;
- (id)generateCommonEventDicWithEventName:(id)a0 frameSetName:(id)a1 frameSetData:(id)a2;
- (void)stop;
- (void).cxx_destruct;

@end
