@class BDTuringNetworkTipView;

@interface BDTuringH5LiveVerifyView : BDTuringVerifyView

@property (retain, nonatomic) BDTuringNetworkTipView *tipView;

- (void)hideVerifyView;
- (void)showVerifyView;
- (void)addTipViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)adjustWebViewPosition;
- (id)prepareWKWebViewConfiguration;
- (void)addWebView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)layoutSubviews;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;

@end
