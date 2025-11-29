@class NSString, UIView;
@protocol BDXWebViewProtocol;

@interface BDALokiWebviewItem : BDALokiBaseItem <BDXKitViewLifecycleProtocol>

@property (retain, nonatomic) UIView<BDXWebViewProtocol> *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidStartLoading:(id)a0;
- (void)viewDidFirstScreen:(id)a0;
- (void)viewDidConstructJSRuntime:(id)a0;
- (void)sendEvent:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (void)view:(id)a0 didFetchedResource:(id)a1 error:(id)a2;
- (void)view:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)view:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)view:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)view:(id)a0 didStartFetchResourceWithURL:(id)a1;
- (id)kitView;
- (void)createViewOnly;
- (void).cxx_destruct;
- (void)reset;
- (void)render;
- (id)itemView;

@end
