@class NSString, UIButton, MMUIViewController;

@interface WCBaseTextFieldWithTipItem : WCBaseTextFieldItem <MMTipsViewControllerDelegate> {
    UIButton *m_tipBtn;
    MMUIViewController *m_viewController;
    NSString *m_nsTipTitle;
    NSString *m_nsTipContent;
}

@property (copy, nonatomic) NSString *cancelTitle;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showPhoneTip;
- (void)addTipBtnTarget:(id)a0 sel:(SEL)a1;
- (void)setViewController:(id)a0;
- (void)setTipBtnShowed:(BOOL)a0;
- (void)setTipContent:(id)a0 Title:(id)a1;
- (void)addCancelTitle:(id)a0 target:(id)a1 sel:(SEL)a2;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1;
- (void).cxx_destruct;

@end
