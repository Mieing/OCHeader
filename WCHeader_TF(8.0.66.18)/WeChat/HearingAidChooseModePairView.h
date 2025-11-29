@class VoiceContainerView, NSString, UIImageView, UIView, HearingAidChooseModePairLogic;
@protocol PariViewDelegate;

@interface HearingAidChooseModePairView : NSObject <ChooseModelLogicDelegate, VoiceContainerViewDelegate>

@property (retain, nonatomic) UIView *chooseModeView;
@property (retain, nonatomic) NSString *audioTag1;
@property (retain, nonatomic) NSString *audioTag2;
@property (retain, nonatomic) UIImageView *firstPlayIcon;
@property (retain, nonatomic) UIImageView *secondPlayIcon;
@property (retain, nonatomic) VoiceContainerView *cardTop;
@property (retain, nonatomic) VoiceContainerView *cardButtom;
@property (nonatomic) BOOL isClickLeft;
@property (nonatomic) BOOL isClickRight;
@property (nonatomic) BOOL leftIsPlayed;
@property (nonatomic) BOOL rightIsPlayed;
@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) HearingAidChooseModePairLogic *logic;
@property (weak, nonatomic) id<PariViewDelegate> delegate;
@property (nonatomic) BOOL isInterrupted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAudio1Tag:(id)a0 audio2Tag:(id)a1 callback:(id /* block */)a2;
- (void)dealloc;
- (BOOL)start:(unsigned long long)a0 audio2:(unsigned long long)a1;
- (BOOL)stop;
- (id)view;
- (id)genPlayTitle:(id)a0;
- (id)genChooseCard:(BOOL)a0;
- (void)onPlayControlBtnClick:(BOOL)a0;
- (void)hasPlayed:(BOOL)a0;
- (void)setUpPlayUI:(BOOL)a0 playing:(BOOL)a1;
- (void)updateState:(BOOL)a0 secondPlaying:(BOOL)a1 btnEnable:(BOOL)a2;
- (void)isClickLeft:(BOOL)a0;
- (void)clearClickBoarder;
- (id)getSelectedAudioName:(BOOL)a0;
- (void)dataReport:(BOOL)a0 letOrRight:(BOOL)a1;
- (void)onErrSignal;
- (void)onFinishPlay:(BOOL)a0;
- (void)VoiceContainerView_touchesBegan:(id)a0 withEvent:(id)a1;
- (void)VoiceContainerView_touchesEnded:(id)a0 withEvent:(id)a1;
- (void)VoiceContainerView_touchesEnded_right:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
