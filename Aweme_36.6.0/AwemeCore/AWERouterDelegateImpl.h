@class NSString;

@interface AWERouterDelegateImpl : NSObject <AWERouterSettingsDelegate, AWERouterDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad_Settings;
+ (id)sharedInstance;

- (void)routerDidTransferWithURLString:(id)a0 fromViewController:(id)a1 toViewController:(id)a2 transitionType:(long long)a3;
- (void)routerDidFailTransferingWithURLString:(id)a0 errorMessage:(id)a1;
- (void)routerDidRetrieveViewControllerForURLString:(id)a0 viewController:(id)a1;
- (void)routerDidFailRetrievingViewControllerForURLString:(id)a0 errorMessage:(id)a1;
- (void)routerHasBeenModifiedBeforeViewControllerRetrieveWithOldURLString:(id)a0 newURLString:(id)a1;
- (void)routerHasBeenModifiedBeforeTransitionRetrieveWithOldURLString:(id)a0 newURLString:(id)a1;
- (void)routerHasBeenModifiedWhenTransferingWithOldURLString:(id)a0 newURLString:(id)a1;
- (void)routerHasBeenInterceptWithURLString:(id)a0 key:(id)a1;
- (BOOL)boolValueForKey:(id)a0;

@end
