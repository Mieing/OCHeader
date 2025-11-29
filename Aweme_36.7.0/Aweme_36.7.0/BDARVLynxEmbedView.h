@class NSString, UIView;
@protocol BDARVLynxEmbedViewDelegate, BDARVLiteWebViewProtocol;

@interface BDARVLynxEmbedView : UIView <UIScrollViewDelegate, BDARVLiteWebViewProtocol>

@property (nonatomic) BOOL scrollEnabled;
@property (retain, nonatomic) UIView<BDARVLiteWebViewProtocol> *webView;
@property (weak, nonatomic) id<BDARVLynxEmbedViewDelegate> delegate;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) UIView *retryView;
@property (nonatomic) BOOL isVisable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showWithModel:(id)a0;
- (void)setupScrollViewEnabled:(BOOL)a0;
- (BOOL)gobackLightLanding;
- (BOOL)canGoBackLightLanding;
- (void)webViewConfig:(id /* block */)a0;
- (id)sendEventToWebview:(id)a0;
- (void)showWithInfo:(id)a0;
- (void)sendPreloadEvent:(id)a0;
- (void)sendMessageFromWebview:(id /* block */)a0;
- (id)scrollViewForInnerView;
- (void)setupWebviewScrollViewEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)clear;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)retry;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 webView:(id)a1;

@end
