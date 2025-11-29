@class RichTextView, NSString, UIImageView, UILabel, WCPayTenpayPasswordCtrlItem, UIView;

@interface WCPayPwdCtrlPanelView : UIView <ILinkEventExt> {
    UIImageView *m_footerTipImageView;
    UILabel *m_footerTip;
    UIView *m_footerView;
    RichTextView *tip;
    UILabel *m_titleLabel;
    UILabel *m_tipsLabel;
}

@property (retain, nonatomic) NSString *m_nsTitle;
@property (retain, nonatomic) NSString *m_nsTips;
@property (retain, nonatomic) WCPayTenpayPasswordCtrlItem *m_textField;
@property (nonatomic) double contentViewY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 tips:(id)a1;
- (void)layoutSubviews;
- (void)setError:(id)a0;
- (void)setFooterView:(id)a0;
- (void)dealloc;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)keyboardDidShow:(id)a0;
- (void)keyboardDidHide:(id)a0;
- (void).cxx_destruct;

@end
