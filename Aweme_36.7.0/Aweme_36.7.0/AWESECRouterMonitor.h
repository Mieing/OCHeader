@class NSString;

@interface AWESECRouterMonitor : NSObject <AWERouterDelegate, AWERouterModificationInterceptorDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;
+ (void)start;

- (void)routerDidTransferWithURLString:(id)a0 fromViewController:(id)a1 toViewController:(id)a2 transitionType:(long long)a3;
- (void)routerDidFailTransferingWithURLString:(id)a0 errorMessage:(id)a1;
- (void)routerDidRetrieveViewControllerForURLString:(id)a0 viewController:(id)a1;
- (void)routerDidFailRetrievingViewControllerForURLString:(id)a0 errorMessage:(id)a1;
- (id)routerModificationBeforeRetrievingControllerWithURLString:(id)a0;
- (id)routerModificationBeforeRetrievingTransitionWithURLString:(id)a0;
- (id)routerModificationWhenTransferingWithTransitionInfo:(id)a0;
- (void)registerRouterDelegate;
- (void)injectPlugins;

@end
