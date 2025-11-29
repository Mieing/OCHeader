@class UIView, NSString, BDXContext, BDXBridgeContext, BDARifleSchemaModel, BDARifleViewProfiler, BDXSchemaParam, BDARifleViewConfiguration;
@protocol AnnieXContainerBaseProtocol, BDXKitViewProtocol, BDARifleViewDelegate, BDAPUProtocol;

@interface BDARifleView : UIView <BDXKitViewLifecycleProtocol>

@property (retain, nonatomic) UIView<BDXKitViewProtocol> *kitView;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *annieXCardView;
@property (copy, nonatomic) NSString *currentURL;
@property (retain, nonatomic) BDXBridgeContext *methodsContext;
@property (retain, nonatomic) BDARifleViewConfiguration *config;
@property (retain, nonatomic) BDXContext *context;
@property (retain, nonatomic) BDARifleViewProfiler *rvProfiler;
@property (retain, nonatomic) BDXSchemaParam *schemaParams;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } anniexDefaultFrame;
@property (readonly, nonatomic) BDARifleSchemaModel *schemaModel;
@property (readonly, copy, nonatomic) NSString *containerID;
@property (weak, nonatomic) id<BDARifleViewDelegate> lifecycleDelegate;
@property (weak, nonatomic) id<BDAPUProtocol> methodDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidStartLoading:(id)a0;
- (void)viewWillStartLoading:(id)a0;
- (void)viewDidFirstScreen:(id)a0;
- (void)viewDidUpdate:(id)a0;
- (void)viewDidPageUpdate:(id)a0;
- (void)viewDidConstructJSRuntime:(id)a0;
- (void)onShow:(id)a0;
- (void)onHide:(id)a0;
- (void)sendEvent:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (void)updateData:(id)a0 processorName:(id)a1;
- (void)triggerLayout;
- (void)view:(id)a0 didFetchedResource:(id)a1 error:(id)a2;
- (void)view:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)view:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)view:(id)a0 updateTitle:(id)a1;
- (void)view:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)view:(id)a0 didStartFetchResourceWithURL:(id)a1;
- (void)view:(id)a0 didRecieveError:(id)a1;
- (void)view:(id)a0 didReceivePerformance:(id)a1;
- (void)view:(id)a0 onSetUp:(id)a1;
- (id)findViewWithName:(id)a0;
- (void)loadURL:(id)a0 withConfiguration:(id)a1;
- (id)uiWithIdSelector:(id)a0;
- (void)loadSchemaModel:(id)a0 withConfiguration:(id)a1;
- (void)_loadAnnieXSchemaModel:(id)a0 withConfiguration:(id)a1;
- (void)_realLoadAnniexWithView:(id)a0 schemaModel:(id)a1 configuration:(id)a2 cardView:(id)a3;
- (void)updateDebugLabelWithViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)_loadSchemaModel:(id)a0 withConfiguration:(id)a1;
- (void)addBasicInfo2BDXContextIfNeed;
- (void)resolveAdInfo;
- (void)setupDebugLabelOnView:(id)a0;
- (void)registerMethodsToView:(id)a0;
- (void)registerLynxMethodsToView:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
