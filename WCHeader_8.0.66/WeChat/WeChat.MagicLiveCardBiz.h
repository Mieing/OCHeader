@interface WeChat.MagicLiveCardBiz : WeChat.MagicSclBaseBiz {
    void /* unknown type, empty encoding */ mbCommonAdapter;
    void /* unknown type, empty encoding */ mbVConsoleHelper;
    void /* unknown type, empty encoding */ pkgMgr;
    void /* unknown type, empty encoding */ jsapiContextImpl;
}

- (id)init;
- (void)start;
- (void)destroy;
- (void)destroyAllFrameSet;
- (id)bizVersionInfo;
- (id)bizPkgInfo;
- (long long)addCustomViewWithView:(id)a0;
- (id)getParentViewController;
- (id)getAppId;
- (void)onCanvasViewCreated:(unsigned int)a0 view:(id)a1;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)a0;
- (void).cxx_destruct;

@end
