@protocol _TtP6WeChat26IMBSclExternalViewDelegate_;

@interface WeChat.MagicEcsBaseBiz : WeChat.MagicSclBaseBiz <WeChat.MagicBrandJsApiContextDelegate> {
    void /* unknown type, empty encoding */ flutterPlugin;
    void /* unknown type, empty encoding */ mbCommonAdapter;
    void /* unknown type, empty encoding */ pkgMgr;
    void /* unknown type, empty encoding */ bizVc;
    void /* unknown type, empty encoding */ $__lazy_storage_$_preInitedFrameSetRoot;
    void /* unknown type, empty encoding */ jsapiContextImpl;
    void /* unknown type, empty encoding */ testPendingJs;
}

@property (nonatomic, readonly) id<_TtP6WeChat26IMBSclExternalViewDelegate_> externalViewDelegate;

- (void)start;
- (void)pause;
- (void)resume;
- (void)destroy;
- (void)onJSException:(id)a0 msg:(id)a1 extra:(id)a2;
- (id)getParentViewController;
- (void)testJsWithTestJs:(id)a0;
- (void)onMainScriptInjected:(id)a0;
- (void)onDestroy:(int)a0;
- (id)bizAppConfig;
- (void)showPopupWindowWithMask:(BOOL)a0 maskColor:(long long)a1;
- (void)dismissPopupWindow;
- (void)showCustomHalfScreenDialogWithExtra:(id)a0;
- (void)invokeFlutterApiWithEvent:(id)a0 data:(id)a1 callback:(id /* block */)a2;
- (void)getBrandServiceSessionIdWithCallback:(id /* block */)a0;
- (void)getBrandServiceJumpPathsWithCallback:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
