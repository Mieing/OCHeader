@class NSString, UIImageView, MMWebViewController, UIButton;
@protocol WCPayOverseasCarTipDelegate;

@interface WCPayOverseasCardTipView : MMUIView <MMWebViewDelegate, ILinkEventExt> {
    UIImageView *_backgroundView;
    UIButton *_selectBtn;
    UIButton *_cancelButton;
    MMWebViewController *_webView;
}

@property (weak, nonatomic) id<WCPayOverseasCarTipDelegate> m_tipViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)onSelect;
- (void)webViewReturn:(id)a0;
- (void)onCancel;
- (void)onConfirm;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)initTextView;
- (void)initBottomView;
- (id)genBackgroundView;
- (void).cxx_destruct;

@end
