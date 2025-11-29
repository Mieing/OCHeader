@class NSString, UIView;

@interface AFDFamiliarTopElement : NSObject <CAAnimationDelegate>

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id /* block */ showAnimationCompletion;
@property (copy, nonatomic) id /* block */ hideAnimationCompletion;
@property (retain, nonatomic) UIView *shellView;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id /* block */ showCompletion;
@property (copy, nonatomic) id /* block */ hideCompletion;
@property (nonatomic) BOOL needCached;
@property (nonatomic) BOOL isCached;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_showWithDefaultAnimation:(id /* block */)a0 delay:(BOOL)a1;
- (void)p_hideWithDefaultAnimation:(id /* block */)a0;
- (void)showWithAnimationConfig:(id)a0 completion:(id /* block */)a1;
- (void)hideWithAnimationConfig:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithType:(unsigned long long)a0;

@end
