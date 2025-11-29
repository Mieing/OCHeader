@interface MMWebViewPlugin_NativeView : MMWebViewPluginBase

- (BOOL)insertNativeView:(id)a0 viewIdentity:(id)a1;
- (id)getNativeView:(unsigned int)a0;
- (BOOL)removeNativeView:(unsigned int)a0;
- (id)getWebView;
- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1 retInfo:(id)a2;

@end
