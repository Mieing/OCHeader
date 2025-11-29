@class NSString;

@interface AFDColorRingShrinkTransition : NSObject <AWETransitionContextProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)performShrinkTransitionWithFromView:(id)a0 toView:(id)a1 completion:(id /* block */)a2;

- (void)startDefaultAnimationWithFromVC:(id)a0 toVC:(id)a1 fromContextProvider:(id)a2 toContextProvider:(id)a3 containerView:(id)a4 context:(id)a5 interactionType:(unsigned long long)a6 completionHandler:(id /* block */)a7;
- (double)transitionDuration:(id)a0;
- (unsigned long long)interactionType;

@end
