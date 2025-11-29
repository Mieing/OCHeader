@class UIViewPropertyAnimator;

@interface CustomVisualEffectView : UIVisualEffectView {
    UIViewPropertyAnimator *_animator;
}

- (id)initWithEffect:(id)a0 intensity:(double)a1;
- (id)initWithEffect:(id)a0 intensity:(double)a1 pausedOnCompletion:(BOOL)a2;
- (void)dealloc;
- (void).cxx_destruct;

@end
