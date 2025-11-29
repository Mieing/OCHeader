@protocol PAGValueAnimatorListener;

@interface FlutterPAGValueAnimator : NSObject {
    long long duration;
    long long startTime;
    long long playTime;
    int repeatCount;
    int repeatedTimes;
    double animatedFraction;
    unsigned long long animatorId;
    id<PAGValueAnimatorListener> animatorListener;
    BOOL running;
}

+ (void)StartDisplayLink;
+ (void)StopDisplayLink;
+ (void)HandleDisplayLink:(id)a0;

- (long long)AddAnimator:(id)a0;
- (void)RemoveAnimator:(long long)a0;
- (id)init;
- (void)onAnimationFrame:(long long)a0;
- (void)setListener:(id)a0;
- (long long)duration;
- (void)setDuration:(long long)a0;
- (double)getAnimatedFraction;
- (void)setCurrentPlayTime:(long long)a0;
- (BOOL)isPlaying;
- (int)repeatedTimes;
- (void)setRepeatedTimes:(int)a0;
- (void)setRepeatCount:(int)a0;
- (void)start;
- (void)stop;
- (void)stop:(BOOL)a0;
- (void)pause;
- (void)resume;
- (long long)animatorId;
- (void)dealloc;
- (void).cxx_destruct;

@end
