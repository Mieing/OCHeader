@interface WeChat.WSWebViewPlugin_UniformReddot : WSWebViewPluginBase <WCFinderRedDotExt> {
    void /* unknown type, empty encoding */ paths;
    void /* unknown type, empty encoding */ tabType;
    void /* unknown type, empty encoding */ businessType;
}

- (void)handleEvent:(id)a0 userInfo:(id)a1;
- (void)finderRedDotDataChangedWithPathKey:(id)a0;
- (id)init;
- (id)initWithPaths:(id)a0 tabType:(int)a1 businessType:(unsigned long long)a2;
- (void).cxx_destruct;

@end
