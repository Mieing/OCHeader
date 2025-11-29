@class UIView, NSString, NSTimer, UIImageView, CAAnimation, LOTAnimationView, AVAudioPlayer, UILabel;

@interface AWEPlayInteractionAntiAnimationController : AWEPlayInteractionBaseController <CAAnimationDelegate, AVAudioPlayerDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) LOTAnimationView *lotView;
@property (retain, nonatomic) UIImageView *lotImage;
@property (retain, nonatomic) UIImageView *bgView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSString *labelText;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) AVAudioPlayer *audioPlayer;
@property (retain, nonatomic) AVAudioPlayer *siuAudioPlayer;
@property (nonatomic) long long currentTime;
@property (retain, nonatomic) CAAnimation *animation;
@property (nonatomic) BOOL animationFinish;
@property (nonatomic) BOOL isRelieveAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeControllerFromSuperView;
- (void)pauseCountDown;
- (void)resumeCountDown;
- (void)receivePlayNotification:(id)a0;
- (void)receiveStopNotification:(id)a0;
- (void)receivePauseNotification:(id)a0;
- (void)receiveResumeNotification:(id)a0;
- (void)getAnimation;
- (void)addTimer;
- (void)endAnimationwithDelay:(double)a0;
- (id)lotWithDirectory:(id)a0;
- (id)audioDataWithDirectory:(id)a0;
- (id)imageWithDirectory:(id)a0 name:(id)a1;
- (void)countDownAnimation:(BOOL)a0;
- (void)hideWithAnimate:(BOOL)a0;
- (void)showWithAnimate:(BOOL)a0 withTime:(long long)a1 playAudio:(BOOL)a2 withCountDown:(BOOL)a3;
- (void)restartCountDown:(long long)a0;
- (void)pauseSound;
- (void)traceShowBarEvent;
- (void)resumeSound;
- (void)countDownAnimation;
- (void)animationDidStart:(id)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)setData:(id)a0;
- (void)invalidateTimer;
- (void)viewDidLoad;
- (void)dealloc;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)resetAnimation;

@end
