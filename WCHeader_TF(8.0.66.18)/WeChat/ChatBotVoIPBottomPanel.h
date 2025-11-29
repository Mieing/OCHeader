@class ChatBotBlurButton, UIView, UILabel, UILongPressGestureRecognizer, AVAudioPlayer, ChatBotEllipseRecordView, NSString, UIVisualEffectView, MMUIButton, ChatBotAnimatedWaveView;
@protocol ChatBotVoIPBottomPanelDelegate;

@interface ChatBotVoIPBottomPanel : UIView <UIGestureRecognizerDelegate>

@property (nonatomic) unsigned int btnBitSet;
@property (nonatomic) unsigned int viewStatus;
@property (retain, nonatomic) ChatBotAnimatedWaveView *voiceInputBtnWaveView;
@property (retain, nonatomic) UIView *voiceInputBtn;
@property (retain, nonatomic) UIView *voiceInputGesView;
@property (retain, nonatomic) UIView *voiceInputBtnDisplayView;
@property (retain, nonatomic) UILabel *voiceInputBtnTitle;
@property (retain, nonatomic) UIVisualEffectView *voiceInputBtnBlurView;
@property (retain, nonatomic) UILongPressGestureRecognizer *voiceInputLongPressGes;
@property (retain, nonatomic) ChatBotBlurButton *keyBoardBtn;
@property (retain, nonatomic) ChatBotBlurButton *cameraBtn;
@property (retain, nonatomic) ChatBotBlurButton *backBtn;
@property (retain, nonatomic) ChatBotBlurButton *stopBtn;
@property (retain, nonatomic) MMUIButton *flipBtn;
@property (retain, nonatomic) MMUIButton *takePhotoBtn;
@property (retain, nonatomic) AVAudioPlayer *player;
@property (retain, nonatomic) ChatBotEllipseRecordView *voiceRecordView;
@property (nonatomic) int openScene;
@property (weak, nonatomic) id<ChatBotVoIPBottomPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPanelBtnBitSet:(unsigned int)a0 openScene:(int)a1;
- (void)layoutSubviews;
- (void)layoutVoiceInputBtn;
- (void)addTapGesToVoiceInputGesView;
- (void)addLongPressGesToVoiceInputGesView;
- (void)onVoiceInputShouldBegin;
- (void)onVoiceInputShouldEnd;
- (void)realOpenClientMic;
- (void)realCloseClientMic;
- (void)layoutKeyBoardBtn;
- (void)onKeyBoardBtnClick;
- (void)layoutCameraBtn;
- (void)onCameraBtnClick;
- (void)layoutBackBtn;
- (void)onBackBtnClick;
- (void)layoutFlipBtn;
- (void)onFlipBtnClick;
- (void)layoutTakePhotoBtn;
- (void)onTakePhotoBtnClick;
- (void)updatePanleWithBtnBitSet:(unsigned int)a0 completion:(id /* block */)a1;
- (void)layoutVoiceRecordView;
- (void)updateViewStatus:(unsigned int)a0 completion:(id /* block */)a1;
- (void)quitCameraMode;
- (void)onChangeMainBtn:(BOOL)a0;
- (void)layoutStopBtn;
- (void)onPressStop;
- (void)addTapGesToStopBtn;
- (void).cxx_destruct;

@end
