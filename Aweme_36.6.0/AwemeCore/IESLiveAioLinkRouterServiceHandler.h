@interface IESLiveAioLinkRouterServiceHandler : IESLiveAioLinkLynxServiceHandler

- (BOOL)shouldCallLynx;
- (void)handleReturnValue:(id)a0 error:(id)a1 tag:(id)a2 completion:(id /* block */)a3;
- (void)openHybridFromNative:(id)a0 currentMethod:(id)a1 completion:(id /* block */)a2;
- (void)forwardInvocation:(id)a0;

@end
