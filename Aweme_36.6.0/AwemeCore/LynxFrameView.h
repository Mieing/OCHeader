@class NSString, LynxTemplateRender, UIView;
@protocol LUIBodyView;

@interface LynxFrameView : UIView <LUIBodyView> {
    LynxTemplateRender *_render;
    UIView<LUIBodyView> *_rootView;
    NSString *_url;
    BOOL _isChildLynxPage;
}

@property (nonatomic) BOOL enableAsyncDisplay;
@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) int instanceId;
@property (nonatomic) BOOL isChildLynxPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)getThreadStrategyForRender;
- (void)updateMetaData:(id)a0;
- (void)sendGlobalEvent:(id)a0 withParams:(id)a1;
- (void)initWithRootView:(id)a0;
- (void)runOnTasmThread:(id /* block */)a0;
- (BOOL)enableTextNonContiguousLayout;
- (void)didReceiveResourceError:(id)a0 withSource:(id)a1 type:(id)a2;
- (void)reportLynxError:(id)a0;
- (id /* block */)getLynxViewBuilderBlock;
- (void)setAttachLynxPageUICallback:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setUrl:(id)a0;
- (void)setIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)reportError:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAppBundle:(id)a0;

@end
