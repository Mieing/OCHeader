@interface IvyRouteServiceImp : NSObject <IvyKit.IvyRouteService>

- (id)createContainerWithUrl:(id)a0 context:(id)a1 error:(id *)a2;
- (BOOL)closeWithContainerID:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (id)routeStack;
- (void)openWithUrl:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)loadWebViewWithPluginView:(id)a0 urlString:(id)a1 context:(id)a2;
- (id)createWebViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1 lifecycle:(id)a2;
- (id)createContainerWithUrl:(id)a0 context:(id)a1 error:(id *)a2 lifecycleDelegate:(id)a3 error:(id *)a4;
- (id)createWebviewWithUrl:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(id)a2 lifecycle:(id)a3;
- (id)init;

@end
