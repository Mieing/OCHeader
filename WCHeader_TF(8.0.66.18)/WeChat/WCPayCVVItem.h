@class UIButton, MMUIViewController, NSString;

@interface WCPayCVVItem : WCPayTenpaySecureCtrlItem {
    UIButton *m_tipBtn;
    MMUIViewController *m_viewController;
    NSString *m_nsTipTitle;
    NSString *m_nsTipContent;
}

- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addTipBtnTarget:(id)a0 sel:(SEL)a1;
- (void)setViewController:(id)a0;
- (void)setTipContent:(id)a0 Title:(id)a1;
- (void)showCVVTip;
- (void)setTipBtnShowed:(BOOL)a0;
- (void).cxx_destruct;

@end
