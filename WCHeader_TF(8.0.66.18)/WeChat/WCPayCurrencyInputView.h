@class WCPayCurrencyInputLogic, NSString, UITextField, UILabel;
@protocol WCPayCurrencyInputViewDelegate;

@interface WCPayCurrencyInputView : UIView <WCPayCurrencyInputLogicDelegate>

@property (weak, nonatomic) id<WCPayCurrencyInputViewDelegate> m_delegate;
@property (retain, nonatomic) WCPayCurrencyInputLogic *m_inputlogic;
@property (retain, nonatomic) UILabel *m_currencyLabel;
@property (retain, nonatomic) UITextField *m_numberTextFiled;
@property (nonatomic) double fontSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)closeKeyboard;
- (void)showKeyboard;
- (void)layoutSubviews;
- (void)internalLayout;
- (void)updateDelegate:(id)a0;
- (void)updateCurrencyTitle:(id)a0;
- (void)updateFontSize:(double)a0;
- (unsigned long long)getAmount;
- (void)onWCPayCurrencyInputLogicStringChangeTo:(id)a0;
- (void)textFieldDidChanged:(id)a0;
- (void).cxx_destruct;

@end
