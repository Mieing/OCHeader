@class NSString;
@protocol _TtP6WeChat26IMBSclExternalViewDelegate_;

@interface WeChat.MagicWeAppCardBiz : WeChat.MagicSclBaseBiz <NSObject> {
    void /* unknown type, empty encoding */ mbCommonAdapter;
    void /* unknown type, empty encoding */ mbVConsoleHelper;
    void /* unknown type, empty encoding */ pkgMgr;
    void /* unknown type, empty encoding */ pubResLogic;
    void /* unknown type, empty encoding */ runtimeBinding;
    void /* unknown type, empty encoding */ pixelBufferPlugin;
    void /* unknown type, empty encoding */ frameSetRootId;
    void /* unknown type, empty encoding */ fileSystemRelativePath;
    void /* unknown type, empty encoding */ jsapiContextImpl;
    void /* unknown type, empty encoding */ frameSetId2View;
}

@property (nonatomic, copy) NSString *frameSetRootId;
@property (nonatomic, copy) NSString *fileSystemRelativePath;
@property (nonatomic, readonly) id<_TtP6WeChat26IMBSclExternalViewDelegate_> externalViewDelegate;

- (id)getMagicBrushBiz;
- (id)init;
- (void)start;
- (void)destroy;
- (id)bizVersionInfo;
- (id)bizPkgInfo;
- (long long)addCustomViewWithView:(id)a0;
- (void)mappingFrameSetId:(id)a0 view:(id)a1;
- (id)getParentViewController;
- (id)getAppId;
- (void)bindWAMagicBrushFrameRuntime:(id)a0;
- (void).cxx_destruct;

@end
