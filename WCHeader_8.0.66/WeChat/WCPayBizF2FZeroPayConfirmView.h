@class WCPayTenpayPasswordCtrlItem, NSString, UILabel, UIView, UIButton;
@protocol WCPayBizF2FZeroPayConfirmViewDelegate;

@interface WCPayBizF2FZeroPayConfirmView : WCPayNavigationView <WCBaseInfoItemDelegate>

@property (retain, nonatomic) UIView *m_panelView;
@property (retain, nonatomic) UIButton *m_cancelButton;
@property (retain, nonatomic) UILabel *m_navigationTitleLabel;
@property (retain, nonatomic) UIView *m_lineView;
@property (retain, nonatomic) UILabel *m_payTitleLabel;
@property (retain, nonatomic) UILabel *m_moneyLabel;
@property (retain, nonatomic) UIButton *m_payButton;
@property (retain, nonatomic) WCPayTenpayPasswordCtrlItem *m_passwordItem;
@property (nonatomic) double m_panelViewMarginUp;
@property (nonatomic) BOOL m_usingBiotric;
@property (retain, nonatomic) NSString *m_payTitle;
@property (retain, nonatomic) NSString *m_moneyString;
@property (weak, nonatomic) id<WCPayBizF2FZeroPayConfirmViewDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showWithBiotricAuth:(BOOL)a0 payTitle:(id)a1 moneyString:(id)a2 baseView:(id)a3;
- (void)layoutSubviews;
- (void)updateView;
- (void)updatePanelView;
- (void)adjustPanelView;
- (void)updateCancelButton;
- (void)updateNavigationTitleLabel;
- (void)updateLineView;
- (void)updatePayTitleLabel;
- (void)updateMoneyLabel;
- (void)updatePayButton;
- (void)updatePasswordItem;
- (void)onCancelButtonClick;
- (void)closeView;
- (void)onPayButtonClick;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (void).cxx_destruct;

@end
