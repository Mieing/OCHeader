@class _TtC25MagicCardStarterProtocols22MagicCardStarterHandle, NSString, MagicSclFrameSetView, UIView, _TtC25MagicCardStarterProtocols25MagicCardStarterBizConfig, _TtC6WeChat18MagicSclCustomView, _TtC6WeChat22MagicCardStarterSclBiz, MMUIButton;

@interface MagicEmojiDemoViewController : MMUIViewController <WeChat.IMagicSnsEmojiDelegate>

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
- (void)initStartToPlayBtn;
- (void)requestFullScreen;
- (void)layoutStartToPlayBtn;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidPopOrDismiss:(BOOL)a0;
- (void)setupEmojiBiz;
- (void)commonNotifyJsEvent;
- (void)changeScene;
- (id)getMagicEmojiViewHolder;
- (id)getFireworkInfoByID:(id)a0;
- (void)onFireworkPlayEnd:(id)a0;
- (void)commonStop;
- (void).cxx_destruct;

@end
