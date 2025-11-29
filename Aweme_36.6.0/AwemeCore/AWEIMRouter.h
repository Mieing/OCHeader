@interface AWEIMRouter : NSObject

+ (BOOL)transferToURLString:(id)a0;
+ (void)transferToURLString:(id)a0 completion:(id /* block */)a1;
+ (id)viewControllerForURLString:(id)a0;
+ (id)transitionWithURLString:(id)a0;
+ (id)transitionWithFormat:(id)a0;
+ (BOOL)transferToURLStringWithFormat:(id)a0;
+ (id)__markURLIfNeed:(id)a0;

@end
