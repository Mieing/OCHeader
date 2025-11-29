@interface AWEHPSkylightAnimator : NSObject

+ (void)showClosingAnimationWithType:(long long)a0 withSkylightView:(id)a1 withUnderTakeHost:(id)a2 withCompletion:(id /* block */)a3;
+ (void)showExpandingAnimationWithType:(long long)a0 withSkylightView:(id)a1 withUnderTakeHost:(id)a2 withCompletion:(id /* block */)a3;
+ (void)showExpandedUIConfigChangeAnimationWithType:(long long)a0 withNewExpandedUIConfig:(id)a1 withSkylightView:(id)a2 withUnderTakeHost:(id)a3 withCompletion:(id /* block */)a4;
+ (void)p_showUpsideHostClosingDefaultAnimateWithModel:(id)a0 withSkylightView:(id)a1 withUnderTakeHost:(id)a2 withCompletion:(id /* block */)a3;
+ (void)p_setUpsideHostClosedFrameWithSkylightContainer:(id)a0 withUnderTakeHost:(id)a1;
+ (void)p_showUpsideHostExpandingDefaultAnimateWithModel:(id)a0 withSkylightView:(id)a1 withUnderTakeHost:(id)a2 withCompletion:(id /* block */)a3;
+ (void)p_setUpsideHostExpandedFrameWithUIConfig:(id)a0 withSkylightContainer:(id)a1 withUnderTakeHost:(id)a2;
+ (void)p_showUpsideHostExpandedUIConfig:(id)a0 withDefaultAnimateWithModel:(id)a1 withSkylightView:(id)a2 withUnderTakeHost:(id)a3 withCompletion:(id /* block */)a4;
+ (void)p_homepageSkylightAnimateAccessApproach:(id)a0 willAnimateWithModel:(id)a1;
+ (void)p_homepageSkylightAnimateUnderTakeHost:(id)a0 willAnimateWithModel:(id)a1;
+ (void)p_homepageSkylightAnimateAccessApproach:(id)a0 animatingWithModel:(id)a1;
+ (void)p_homepageSkylightAnimateUnderTakeHost:(id)a0 animatingWithModel:(id)a1;
+ (void)p_homepageSkylightAnimateAccessApproach:(id)a0 didAnimateWithModel:(id)a1;
+ (void)p_homepageSkylightAnimateUnderTakeHost:(id)a0 didAnimateWithModel:(id)a1;

@end
