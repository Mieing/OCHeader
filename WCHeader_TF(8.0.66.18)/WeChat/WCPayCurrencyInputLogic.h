@class NSRegularExpression, NSString;
@protocol WCPayCurrencyInputLogicDelegate;

@interface WCPayCurrencyInputLogic : NSObject <UITextFieldDelegate>

@property (weak, nonatomic) id<WCPayCurrencyInputLogicDelegate> m_delegate;
@property (nonatomic) unsigned int m_maxLength;
@property (retain, nonatomic) NSRegularExpression *m_pattern;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 MaxLength:(unsigned int)a1;
- (void)textFieldDidChange:(id)a0;
- (void)callDelegateString:(id)a0;
- (BOOL)isNumeric:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void).cxx_destruct;

@end
