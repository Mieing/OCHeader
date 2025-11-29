@class AWEVoiceSearchManager, CAShapeLayer, NSDictionary, AWESearchKeyboardVoiceSearchEntranceView, UIView, UILabel;
@protocol AWESearchKeyboardVoiceSearchDelegate;

@interface AWESearchKeyboardVoiceSearchElement : AWESearchKeyboardBaseElement

@property (retain, nonatomic) AWEVoiceSearchManager *voiceSearchManager;
@property (retain, nonatomic) UIView *lottieView;
@property (retain, nonatomic) AWESearchKeyboardVoiceSearchEntranceView *entranceView;
@property (weak, nonatomic) id<AWESearchKeyboardVoiceSearchDelegate> delegate;
@property (nonatomic) unsigned long long lastLottieType;
@property (nonatomic) long long setupVoiceSearchManagerTimestamp;
@property (retain, nonatomic) CAShapeLayer *circleLayer;
@property (nonatomic) BOOL isNewUI;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) BOOL hasText;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) NSDictionary *uiInfo;

- (void)hostVC_viewDidDisappear;
- (void)playLottie;
- (void)setupNewUI;
- (BOOL)voiceSearchPanelShowing;
- (id)pagePositionWithType:(long long)a0;
- (void)hostVC_setupContext:(id)a0;
- (void)hostVC_updateContext:(id)a0;
- (void)host_elementViewDidSetup;
- (void)host_themeChange:(id)a0;
- (void)host_tabbarHidden:(BOOL)a0;
- (void)host_elementViewUpdateNewUISize:(struct CGSize { double x0; double x1; })a0 leftOffset:(double)a1 hasText:(BOOL)a2 uiInfo:(id)a3;
- (void)hostVC_keyboardWillShow:(id)a0;
- (void)hostVC_keyboardDidShow:(id)a0;
- (void)hostVC_keyboardWillHide:(id)a0;
- (void)setupVoiceSearchManager;
- (void)updateVoiceSearchManager;
- (void)stopLottie;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
