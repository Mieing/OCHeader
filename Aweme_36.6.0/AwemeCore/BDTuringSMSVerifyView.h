@class BDTuringImageTipView;

@interface BDTuringSMSVerifyView : BDTuringVerifyView

@property (retain, nonatomic) BDTuringImageTipView *tipView;

- (void)addTipView;
- (id)customTheme;
- (void)adjustWebViewPosition;
- (void).cxx_destruct;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (id)customText;

@end
