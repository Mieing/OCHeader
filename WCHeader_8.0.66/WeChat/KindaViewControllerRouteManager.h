@class NSString, NSMutableArray;

@interface KindaViewControllerRouteManager : MMUserService <KindaViewControllerRouteActionDelegate, MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *routeActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)previousViewController:(id)a0;
- (void)DismissOrPopViewController:(id)a0 Animated:(BOOL)a1;
- (void)DismissOrPopViewController:(id)a0 Animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)DismissModalViewController:(id)a0 Animated:(BOOL)a1;
- (void)DismissModalViewController:(id)a0 Animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)PresentModalViewController:(id)a0 animated:(BOOL)a1;
- (void)PresentModalViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)PushViewController:(id)a0 animated:(BOOL)a1;
- (void)PushViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)PopToViewController:(id)a0 animated:(BOOL)a1;
- (void)PopViewControllerAndPush:(id)a0 animated:(BOOL)a1;
- (void)closeTinyApp:(id)a0 animated:(BOOL)a1;
- (void)closeTinyApp:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)routeActionDidTimeout:(id)a0;
- (void)addRouteAction:(id)a0;
- (void)parseNext;
- (void).cxx_destruct;

@end
