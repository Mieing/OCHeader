@interface MMWebViewPlugin_preInjectJS : MMWebViewPluginBase

- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (id)getPreInjectScriptStr;
- (void)tryStartOutlinkDetect;

@end
