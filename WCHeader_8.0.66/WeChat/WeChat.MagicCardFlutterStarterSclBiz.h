@protocol _TtP6WeChat26IMBSclExternalViewDelegate_;

@interface WeChat.MagicCardFlutterStarterSclBiz : WeChat.MagicSclBaseBiz {
    void /* unknown type, empty encoding */ _bizName;
    void /* unknown type, empty encoding */ jsapiList;
    void /* unknown type, empty encoding */ plugin;
    void /* unknown type, empty encoding */ mbCommonAdapter;
    void /* unknown type, empty encoding */ pkgMgr;
    void /* unknown type, empty encoding */ bizVc;
}

@property (nonatomic, readonly) id<_TtP6WeChat26IMBSclExternalViewDelegate_> externalViewDelegate;

- (void)start;
- (void)pause;
- (void)resume;
- (void)destroy;
- (void)onMainScriptInjected:(id)a0;
- (id)getParentViewController;
- (id)getAppId;
- (id)init;
- (void).cxx_destruct;

@end
