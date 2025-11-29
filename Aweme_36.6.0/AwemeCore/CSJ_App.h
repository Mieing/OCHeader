@interface CSJ_App : BUDynamicPlugin

+ (id)appInfoDictionary;

- (void)isAppInstalledWithParam:(id)a0 callback:(id /* block */)a1 webView:(id)a2 controller:(id)a3;
- (void)copyToClipboardWithParam:(id)a0 callback:(id /* block */)a1 webView:(id)a2 controller:(id)a3;
- (void)appInfoWithParam:(id)a0 callback:(id /* block */)a1 webView:(id)a2 controller:(id)a3;
- (void)configWithParam:(id)a0 callback:(id /* block */)a1 webView:(id)a2 controller:(id)a3;

@end
