@class UIView, IESLiveAudioAvatarView, NSArray, NSString, IESLiveVideoPlayerController, UIImageView, CAGradientLayer, NSMutableArray;
@protocol IESLiveGuideAudioKTVBackgroundViewDataSource, IESLiveWebPPlayer;

@interface IESLiveGuideAudioKTVBackgroundView : UIView <IESLiveVideoPlayerControllerDelegate, CAAnimationDelegate, IESLiveGuideAudioKTVBackgroundViewProtocol>

@property (weak, nonatomic) id<IESLiveGuideAudioKTVBackgroundViewDataSource> dataSource;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) IESLiveAudioAvatarView *avatarView;
@property (retain, nonatomic) UIView *seatsView;
@property (retain, nonatomic) IESLiveVideoPlayerController *playerController;
@property (retain, nonatomic) CAGradientLayer *videoMaskLayer;
@property (retain, nonatomic) CAGradientLayer *breathGradientLayer;
@property (retain, nonatomic) NSMutableArray *defaultColors;
@property (copy, nonatomic) NSArray *targetColors;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *fullStage;
@property (retain, nonatomic) UIImageView *chorusBGView;
@property (retain, nonatomic) UIImageView *chorusSeatIV;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAvatarAnimationWithUrls:(id)a0;
- (void)setKTVBackgroundDefaultInfo:(id)a0;
- (void)setChorusBackgroundWithUrls:(id)a0;
- (void)setBackgroundWithUrls:(id)a0;
- (void)startBreathAnimationWithColors:(id)a0;
- (id)sortColor:(id)a0;
- (void)animationRunloop;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)dealloc;
- (void)setupViews;
- (void)setContentBackgroundColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataSource:(id)a1;

@end
