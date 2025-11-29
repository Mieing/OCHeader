@class NSString, UILabel;

@interface WCPayBankCardNumberItem : WCPayTenpaySecureCtrlItem {
    UILabel *m_bankcardLabel;
    NSString *m_value;
    BOOL m_isUnselectable;
}

@property (retain, nonatomic) NSString *m_starBankNumber;

- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateView;
- (id)getValue;
- (void)setBankCardNumber:(id)a0 starBankNumber:(id)a1;
- (void)clearItem;
- (void).cxx_destruct;

@end
