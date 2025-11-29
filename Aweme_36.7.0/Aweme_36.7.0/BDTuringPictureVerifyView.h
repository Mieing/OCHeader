@class NSString, BDTuringNetworkTipView;

@interface BDTuringPictureVerifyView : BDTuringVerifyView <BDTuringKeyboardDelegate>

@property (retain, nonatomic) BDTuringNetworkTipView *tipView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)customTheme;
- (void)hideVerifyView;
- (void)showVerifyView;
- (void)addTipViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)adjustWebViewPosition;
- (void)onKeyboardWillShow:(double)a0;
- (void)onKeyboardWillHide:(double)a0;
- (void).cxx_destruct;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (id)customText;

@end
