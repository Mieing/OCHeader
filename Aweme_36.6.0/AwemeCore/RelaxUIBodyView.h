@class NSString, RelaxViewBuilder, RelaxView;

@interface RelaxUIBodyView : UIView <LUIBodyView> {
    RelaxView *relaxView_;
    RelaxViewBuilder *builder_;
}

@property (nonatomic) BOOL enableAsyncDisplay;
@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) int instanceId;
@property (nonatomic) BOOL isChildLynxPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendGlobalEvent:(id)a0 withParams:(id)a1;
- (void)runOnTasmThread:(id /* block */)a0;
- (BOOL)enableTextNonContiguousLayout;
- (void)didReceiveResourceError:(id)a0 withSource:(id)a1 type:(id)a2;
- (void)reportLynxError:(id)a0;
- (id /* block */)getLynxViewBuilderBlock;
- (void)didReceiveResourceError:(id)a0;
- (void)attachRootView:(id)a0;
- (void).cxx_destruct;
- (void)setIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithBuilder:(id)a0;
- (void)reportError:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
