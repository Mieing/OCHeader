@class IESLiveVoiceWave, UIImageView, UIImage, NSMutableArray;
@protocol IESLiveWebPPlayer;

@interface IESLiveInteractiveAudioView : UIView

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *centerAvatorView;
@property (nonatomic) BOOL isAnimated;
@property (retain, nonatomic) NSMutableArray *urlArray;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *animationViewLoop;
@property (retain, nonatomic) IESLiveVoiceWave *limitVoiceWave;
@property (retain, nonatomic) UIImage *defaultSpeakingImage;

- (void)startMultiTalkingAnimation;
- (void)stopMultiTalkingAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andURLArray:(id)a1;
- (void)updateAudioAnimation:(BOOL)a0;
- (void)updateVoiceWaveWithMicDress:(id)a0 userID:(id)a1;
- (void)updateAvatarURLList:(id)a0;
- (BOOL)isLimitVoiceWaveValid:(id)a0;
- (void)updateAvatorUI;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
