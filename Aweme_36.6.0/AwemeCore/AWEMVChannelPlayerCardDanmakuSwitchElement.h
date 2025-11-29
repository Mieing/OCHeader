@class UIButton;

@interface AWEMVChannelPlayerCardDanmakuSwitchElement : AWEMVChannelPlayerCardBaseElement

@property (retain, nonatomic) UIButton *danmakuSwitch;

+ (Class)aAWEPadModuleAdapterClass;

- (void)initializeElement;
- (id)aAWEPadModuleAdapter;
- (void)updateDanmakuSwitch;
- (void)updateAccessibilityWithIsOn:(BOOL)a0;
- (void)handleClickDanmakuSwitch;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
