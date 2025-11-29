@class RelaxEngine;

@interface __animationFrame : AnimationFrame {
    RelaxEngine *_runtime;
    struct unique_ptr<relax::AnimationFrame, std::default_delete<relax::AnimationFrame>> { struct AnimationFrame *__ptr_; } _impl;
    struct weak_ptr<relax::ElementManager> { struct ElementManager *__ptr_; struct __shared_weak_count *__cntrl_; } _weakElementManager;
}

+ (id)getCurrent;
+ (long long)requestFrameCommitCallback:(id /* block */)a0;
+ (void)cancelAnimationFrame:(long long)a0;
+ (long long)requestAnimationFrame:(id /* block */)a0;

- (long long)requestFrameCommitCallback:(id /* block */)a0;
- (void)cancelAnimationFrame:(long long)a0;
- (long long)requestAnimationFrame:(id /* block */)a0;
- (id)init:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)detach;
- (void)dealloc;

@end
