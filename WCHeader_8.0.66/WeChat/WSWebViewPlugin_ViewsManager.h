@interface WSWebViewPlugin_ViewsManager : WebSearchPluginBase {
    void /* unknown type, empty encoding */ pageType;
    void /* unknown type, empty encoding */ screenShot;
    void /* unknown type, empty encoding */ hasTeachPage;
}

- (void)handleEvent:(id)a0 userInfo:(id)a1;
- (void)changePageType:(unsigned long long)a0;
- (BOOL)enableRestoreEducatePage;
- (id)init;
- (void).cxx_destruct;

@end
