@class BDTuringConfig, BDAccountSealModel;

@interface BDAccountSealView : BDTuringWebView

@property (retain, nonatomic) BDAccountSealModel *model;
@property (retain, nonatomic) BDTuringConfig *config;

- (void)hideVerifyView;
- (void)loadSealView;
- (void)handlePiperOnResult:(id)a0 callback:(id /* block */)a1;
- (void)handlePiperGetData:(id)a0 callback:(id /* block */)a1;
- (void)handlePiperPageEnd:(id)a0 callback:(id /* block */)a1;
- (void)handlePiperShowAlert:(id)a0 callback:(id /* block */)a1;
- (void)handlePiperVerify:(id)a0 callback:(id /* block */)a1;
- (void)handlePiperToPage:(id)a0 callback:(id /* block */)a1;
- (void)handlePiperShow:(id)a0 callback:(id /* block */)a1;
- (void)handlePiperTheme:(id)a0 callback:(id /* block */)a1;
- (void)handleNativeEventUpload:(id)a0 callback:(id /* block */)a1;
- (void)dismissVerifyView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;

@end
