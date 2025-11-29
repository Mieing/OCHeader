@class NSString;

@interface WCFinderFeedListTransitionHelperSwizzleVC : UIViewController <WCFinderFeedListTransitionHelperSwizzleMethods>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)finderSwizzleNavigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (id)finderSwizzleNavigationController:(id)a0 interactionControllerForAnimationController:(id)a1;
- (void)finderSwizzleViewDidAppear:(BOOL)a0;

@end
