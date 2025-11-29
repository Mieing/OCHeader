@class SHSPhoneNumberFormatter, SHSPhoneLogic;

@interface SHSPhoneTextField : UITextField

@property (readonly) SHSPhoneNumberFormatter *formatter;
@property (copy, nonatomic) id /* block */ textDidChangeBlock;
@property (retain, nonatomic) SHSPhoneLogic *logicDelegate;

- (id)phoneNumberWithoutPrefix;
- (void)logicInitialization;
- (id)phoneNumber;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)setFormattedText:(id)a0;
- (id)delegate;
- (void)setDelegate:(id)a0;

@end
