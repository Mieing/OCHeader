@interface AFDColorRingAnimatorFactory : NSObject

+ (id)validateAndApplyDefaults:(id)a0;
+ (id)buildDismissAnimatorForContentView:(id)a0;
+ (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; double x3; double x4; })calculateAnimationParameters:(id)a0 contentSubview:(id)a1 targetScale:(double)a2;
+ (id /* block */)createCompletionHandlerWithContentView:(id)a0 alphaView:(id)a1 maskView:(id)a2 completion:(id /* block */)a3;
+ (id)buildDismissAnimatorWithConfig:(id)a0;

@end
