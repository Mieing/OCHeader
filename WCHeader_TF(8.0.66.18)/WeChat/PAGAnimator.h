@interface PAGAnimator : NSObject {
    struct shared_ptr<pag::PAGAnimator> { struct PAGAnimator *__ptr_; struct __shared_weak_count *__cntrl_; } animator;
    struct shared_ptr<pag::AnimatorListener> { struct AnimatorListener *__ptr_; struct __shared_weak_count *__cntrl_; } animatorListener;
}

- (id)initWithUpdater:(id)a0;
- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (BOOL)isSync;
- (void)setSync:(BOOL)a0;
- (long long)duration;
- (void)setDuration:(long long)a0;
- (int)repeatCount;
- (void)setRepeatCount:(int)a0;
- (double)progress;
- (void)setProgress:(double)a0;
- (BOOL)isRunning;
- (void)start;
- (void)cancel;
- (void)update;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
