@class _TtC25MagicCardStarterProtocols22MagicCardStarterHandle, NSString, MagicSclFrameSetView, UIView, _TtC25MagicCardStarterProtocols25MagicCardStarterBizConfig, _TtC6WeChat18MagicSclCustomView, _TtC6WeChat22MagicCardStarterSclBiz, MMUIButton;

@interface MagicCardNativeStarterDemoViewControlller : MMUIViewController

@property (retain, nonatomic) MMUIButton *preloadButton;
@property (retain, nonatomic) MMUIButton *stopButton;
@property (retain, nonatomic) MMUIButton *startButton;
@property (retain, nonatomic) MMUIButton *coverButton;
@property (retain, nonatomic) MMUIButton *notifyButton;
@property (retain, nonatomic) MMUIButton *simpleStartButton;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MagicSclFrameSetView *frameSetView;
@property (nonatomic) BOOL isResumed;
@property (retain, nonatomic) MMUIButton *startToPlayBtn;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } halfScreen;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fullScreen;
@property (retain, nonatomic) _TtC6WeChat22MagicCardStarterSclBiz *starterBiz;
@property (retain, nonatomic) NSString *frameSetName;
@property (retain, nonatomic) NSString *frameSetDataStr;
@property (retain, nonatomic) NSString *frameSetRootName;
@property (retain, nonatomic) _TtC6WeChat18MagicSclCustomView *customView;
@property (retain, nonatomic) _TtC25MagicCardStarterProtocols22MagicCardStarterHandle *starterHandle;
@property (retain, nonatomic) _TtC25MagicCardStarterProtocols25MagicCardStarterBizConfig *bizConfig;

- (void)dealloc;
- (id)biz;
- (void)viewDidLoad;
- (id)getCardStyle;
- (void)setConfig:(id)a0 type:(unsigned long long)a1;
- (void)alert;
- (void)initStartToPlayBtn;
- (void)requestFullScreen;
- (void)layoutStartToPlayBtn;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidPopOrDismiss:(BOOL)a0;
- (void)commonStart;
- (void)commonBindView;
- (void)commonNotifyJsEvent;
- (void)cover;
- (void)commonStop;
- (void)start;
- (void)bindView;
- (void)notifyJsEvent;
- (void)stopBiz;
- (id)generateCommonEventDicWithEventName:(id)a0 frameSetName:(id)a1 frameSetData:(id)a2;
- (void)stop;
- (id)getCustomJsEvent;
- (void)simpleStart;
- (void)simpleDestroy;
- (void)startFinderNativeCard;
- (void)bindFinderView;
- (void)notifyFinderJsEvent;
- (void)stopFinderNativeCard;
- (void).cxx_destruct;

@end
