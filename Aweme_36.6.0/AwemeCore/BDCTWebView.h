@class NSString, BDCTCorePiperHandler;

@interface BDCTWebView : WKWebView <WKNavigationDelegate> {
    BOOL _hasSetCustomUA;
}

@property (retain, nonatomic) BDCTCorePiperHandler *corePiperHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)webView;

- (void)addPiperHandlers;
- (void)addPiperHandler:(id)a0;
- (void)p_loadURL:(id)a0;
- (void)loadURL:(id)a0;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (BOOL)isOpaque;
- (void)didMoveToSuperview;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (void)webViewDidFinishLoad:(id)a0;

@end
