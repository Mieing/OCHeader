@class NSString;

@interface AWEPopTransitionBase : NSObject <AWETransitionContextProvider>

@property (nonatomic) BOOL savedHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willStartAnimationWithFromVC:(id)a0 toVC:(id)a1 fromContextProvider:(id)a2 toContextProvider:(id)a3 containerView:(id)a4 context:(id)a5;
- (void)willStartInteractiveTransitionWithFromVC:(id)a0 toVC:(id)a1 fromContextProvider:(id)a2 toContextProvider:(id)a3 containerView:(id)a4 context:(id)a5;
- (void)willCancelAnimationWithFromVC:(id)a0 toVC:(id)a1 fromContextProvider:(id)a2 toContextProvider:(id)a3 containerView:(id)a4 context:(id)a5;
- (void)showTabBarIfNeededWithFromVC:(id)a0 toVC:(id)a1;
- (BOOL)isFirstPageViewController:(id)a0;

@end
