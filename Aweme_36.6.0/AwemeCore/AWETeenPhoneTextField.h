@class AWETeenPhoneNumberFormatter, AWETeenPhoneLogic;

@interface AWETeenPhoneTextField : UITextField

@property (retain, nonatomic) AWETeenPhoneLogic *logicDelegate;
@property (readonly) AWETeenPhoneNumberFormatter *formatter;
@property (copy, nonatomic) id /* block */ textDidChangeBlock;

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
