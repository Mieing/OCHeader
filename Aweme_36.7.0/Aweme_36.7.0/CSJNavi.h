@interface CSJNavi : BUDynamicPlugin

- (id)protectedHandlerSet;
- (void)closeWithParam:(id)a0 callback:(id /* block */)a1 webView:(id)a2 controller:(id)a3;
- (void)openWithParam:(id)a0 callback:(id /* block */)a1 webView:(id)a2 controller:(id)a3;
- (void)openAppWithParam:(id)a0 callback:(id /* block */)a1 webView:(id)a2 controller:(id)a3;

@end
