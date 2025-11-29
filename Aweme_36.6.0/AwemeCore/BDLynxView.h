@class BDLynxViewClient, NSString, BDLynxViewBaseParams, BDLynxProvider, LynxConfig, NSData, LynxView;
@protocol BDLImageLoaderProtocol, LynxDynamicComponentFetcher, BDLynxClientViewDelegate;

@interface BDLynxView : UIView <BDLynxClientLifeCycleDelegate, LynxImageFetcher, LynxResourceFetcher, BDLynxProviderDelegate>

@property (retain, nonatomic) BDLynxViewClient *clientDelegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lynxViewFrame;
@property (retain, nonatomic) LynxConfig *lynxConfig;
@property (retain, nonatomic) BDLynxProvider *lynxProvdier;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) id /* block */ lynxBuilderBlock;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSData *prefetchData;
@property (weak, nonatomic) id<BDLynxClientViewDelegate> lynxDelegate;
@property (copy, nonatomic) NSString *containerID;
@property (retain, nonatomic) LynxView *lynxView;
@property (retain, nonatomic) id<BDLImageLoaderProtocol> imageLoader;
@property (weak, nonatomic) id<LynxDynamicComponentFetcher> dynamicComponentFetcher;
@property (retain, nonatomic) BDLynxViewBaseParams *params;
@property (nonatomic) long long widthMode;
@property (nonatomic) long long heightMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultGroup;

- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidConstructJSRuntime;
- (void)viewDidStartLoading;
- (void)viewDidFirstScreen;
- (void)viewDidUpdate;
- (void)viewDidPageUpdate;
- (void)viewDidRecieveError:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)registerUI:(Class)a0 withName:(id)a1;
- (id)findViewWithName:(id)a0;
- (id)viewWithName:(id)a0;
- (void)registerModule:(Class)a0 param:(id)a1;
- (id /* block */)loadImageWithURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 contextInfo:(id)a2 completion:(id /* block */)a3;
- (void)registerHandler:(id /* block */)a0 forMethod:(id)a1;
- (void)registerShadowNode:(Class)a0 withName:(id)a1;
- (id /* block */)loadResourceWithURL:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (id)redirectURL:(id)a0;
- (id /* block */)loadCanvasImageWithURL:(id)a0 contextInfo:(id)a1 completion:(id /* block */)a2;
- (void)toastErrorMessage:(id)a0 forDuration:(long long)a1;
- (void)loadLynxWithParams:(id)a0;
- (void)bdlynxViewLoadUrlFailed:(id)a0;
- (void)bdlynxViewloadTemplateWithUrl:(id)a0 onComplete:(id /* block */)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 builderBlock:(id /* block */)a1;
- (void)setWidthAndHeightMode:(id)a0;
- (void)p_loadParams:(id)a0;
- (void)loadParamsUsingRender:(id)a0 render:(id)a1;
- (void)loadLynxBaseParams:(id)a0;
- (void)reloadWithBaseParams:(id)a0 data:(id)a1;
- (void)reloadWithBaseParams:(id)a0;
- (void)loadLynxWithParamsRender:(id)a0 render:(id)a1;
- (void)updateModuleData:(id)a0;
- (void).cxx_destruct;
- (void)updateData:(id)a0;
- (void)reload;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)registerModule:(Class)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
