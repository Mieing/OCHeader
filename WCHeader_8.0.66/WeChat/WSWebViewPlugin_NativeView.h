@interface WSWebViewPlugin_NativeView : WSWebViewPluginBase

- (BOOL)insertNativeView:(id)a0 viewIdentity:(id)a1 withError:(id *)a2;
- (BOOL)removeNativeView:(unsigned int)a0 withError:(id *)a1;
- (id)getNativeView:(unsigned int)a0 withError:(id *)a1;
- (void)handleEvent:(id)a0 userInfo:(id)a1;

@end
