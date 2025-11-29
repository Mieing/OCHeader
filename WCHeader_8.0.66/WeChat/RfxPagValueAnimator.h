@class NSHashTable;
@protocol RfxPagValueAnimatorListener;

@interface RfxPagValueAnimator : NSObject {
    long long duration;
    long long startTime;
    long long playTime;
    int repeatCount;
    int repeatedTimes;
    double animatedFraction;
    NSHashTable *animatorListenerTable;
    id<RfxPagValueAnimatorListener> animatorListener;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } lock;
}

@property long long animatorId;

+ (void)StartDisplayLink;
+ (void)StopDisplayLink;
+ (void)HandleDisplayLink:(id)a0;
+ (long long)AddAnimator:(id)a0;
+ (void)RemoveAnimator:(long long)a0;

- (id)init;
- (void)dealloc;
- (void)animationUpdate;
- (void)animationCancel;
- (void)animationStart;
- (void)animationEnd;
- (void)animationRepeat;
- (void)onAnimationFrame:(long long)a0;
- (void)setListener:(id)a0;
- (long long)duration;
- (void)setDuration:(long long)a0;
- (double)getAnimatedFraction;
- (void)setCurrentPlayTime:(long long)a0;
- (BOOL)isPlaying;
- (void)setRepeatCount:(int)a0;
- (void)start;
- (void)stop;
- (void)stop:(BOOL)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
