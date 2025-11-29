@interface WeChat.MagicGameLoadingBiz : WeChat.MagicSclBaseBiz {
    void /* unknown type, empty encoding */ mbCommonAdapter;
    void /* unknown type, empty encoding */ mbVConsoleHelper;
    void /* unknown type, empty encoding */ pkgMgr;
    void /* unknown type, empty encoding */ jsapiContextImpl;
    void /* unknown type, empty encoding */ magicGameLoadingVC;
    void /* unknown type, empty encoding */ framesetRootId;
}

- (id)init;
- (void)start;
- (id)getFrameSetRoot;
- (void)preLayoutFrameSet;
- (void)bindFrameSetView:(id)a0;
- (void)unbindFrameSetView:(id)a0;
- (void)destroyFrameSetRootWithId:(id)a0;
- (void)onMainScriptInjected:(id)a0;
- (void)destroy;
- (id)bizVersionInfo;
- (id)bizPkgInfo;
- (long long)addCustomViewWithView:(id)a0;
- (id)getAppId;
- (void)setMagicGameLoadingVCWithVc:(id)a0;
- (id)getMagicGameLoadingVC;
- (void)onCanvasViewCreated:(unsigned int)a0 view:(id)a1;
- (id)getParentViewController;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)a0;
- (void).cxx_destruct;

@end
