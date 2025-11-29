@class NSString, NSMutableSet, NSDictionary;

@interface AWEAntiAddictSlideManager : NSObject

@property (nonatomic) BOOL isFirstDrag;
@property (nonatomic) double stayLimitDuration;
@property (nonatomic) double playedDuration;
@property (copy, nonatomic) NSString *currentAwemeId;
@property (retain, nonatomic) NSMutableSet *watchedRelieveVideos;
@property (nonatomic) BOOL isVideoPaused;
@property (nonatomic) long long slideState;
@property (copy, nonatomic) NSDictionary *lottieSettings;
@property (nonatomic) long long forceSlideEnableTime;
@property (nonatomic) BOOL forceSlideEnable;
@property (nonatomic) BOOL animationFinish;

+ (id)shareManager;

- (void)feedWillDisplayCell:(id)a0;
- (void)feedDidEndDisplayCell:(id)a0;
- (void)userDragUpEndedWithAwemeId:(id)a0;
- (void)antiAddictP5Reset:(id)a0;
- (void)playerDidPlaying:(id)a0 playedDuration:(double)a1;
- (void)forceSetSlideEnable:(id)a0;
- (void)setSlideEnable:(id)a0;
- (void)playAnimation:(long long)a0 playAudio:(BOOL)a1 countdown:(BOOL)a2 awemeId:(id)a3;
- (void)pauseAnimationTimer:(id)a0;
- (void)resumeAnimationTimer:(id)a0;
- (BOOL)isSlideDisabledAweme:(id)a0;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)init;
- (void)reset;
- (void)setup;

@end
