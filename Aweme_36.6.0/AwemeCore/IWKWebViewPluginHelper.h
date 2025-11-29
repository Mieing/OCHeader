@interface IWKWebViewPluginHelper : NSObject

+ (id)runPlugins:(id)a0 webview:(id)a1 selector:(SEL)a2 lifecycle:(id)a3 extra:(id)a4 withHandleBlock:(id /* block */)a5;
+ (id)runPlugins:(id)a0 withHandleBlock:(id /* block */)a1;
+ (id)runPlugins:(id)a0 extra:(id)a1 withHandleBlock:(id /* block */)a2;
+ (void)duplicateCheck:(id)a0 inContainer:(id)a1;

@end
