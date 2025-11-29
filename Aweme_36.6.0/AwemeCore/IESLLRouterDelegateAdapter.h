@class NSString;
@protocol IESLLRouterDelegate;

@interface IESLLRouterDelegateAdapter : NSObject <AWERouterDelegate>

@property (weak, nonatomic) id<IESLLRouterDelegate> sourceDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)routerDidBeginTransferWithURLString:(id)a0;
- (void)routerDidRegisterURLString:(id)a0;
- (void)routerDidFailRegisteringURLString:(id)a0 errorMessage:(id)a1;
- (void)routerDidCreateViewControllerBeforeTransferWithURLString:(id)a0 targetViewController:(id)a1;
- (void)routerDidTransferWithURLString:(id)a0 fromViewController:(id)a1 toViewController:(id)a2 transitionType:(long long)a3;
- (void)routerDidFailTransferingWithURLString:(id)a0 errorMessage:(id)a1;
- (void)routerDidConfigRouterParamsDict:(id)a0 viewController:(id)a1;
- (void)routerDidRetrieveViewControllerForURLString:(id)a0 viewController:(id)a1;
- (void)routerDidFailRetrievingViewControllerForURLString:(id)a0 errorMessage:(id)a1;
- (void)routerHasBeenInterceptWithURLString:(id)a0 key:(id)a1 stage:(unsigned long long)a2;
- (void)routerHasBeenModifiedBeforeViewControllerRetrieveWithOldURLString:(id)a0 newURLString:(id)a1;
- (void)routerHasBeenModifiedBeforeTransitionRetrieveWithOldURLString:(id)a0 newURLString:(id)a1;
- (void)routerHasBeenModifiedWhenTransferingWithOldURLString:(id)a0 newURLString:(id)a1;
- (void).cxx_destruct;

@end
