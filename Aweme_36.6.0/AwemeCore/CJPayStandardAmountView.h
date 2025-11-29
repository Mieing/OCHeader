@class NSNumber, NSString, CJPayScrollLabel, NSNumberFormatter, CJPayLabel, MASConstraint;

@interface CJPayStandardAmountView : UIView <CJPayScrollLabelDelegate>

@property (retain, nonatomic) CJPayLabel *amountLabel;
@property (retain, nonatomic) CJPayScrollLabel *scrollLabel;
@property (retain, nonatomic) CJPayLabel *unitLabel;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (nonatomic) double amountLabelFontSize;
@property (nonatomic) double rightMargin;
@property (nonatomic) double bottomMargin;
@property (retain, nonatomic) MASConstraint *amountLabelLeft;
@property (retain, nonatomic) MASConstraint *scrollLabelLeft;
@property (retain, nonatomic) NSNumber *startNumber;
@property (nonatomic) BOOL isThousandSeparator;
@property (nonatomic) BOOL isKeepTwoDecimals;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentAmountString;
- (void)updateAmountTextWithAnimation:(id)a0;
- (void)updateAmountText:(id)a0;
- (id)initWithAmountFontSize:(double)a0;
- (id)numberFormatterForScrollLabel;
- (id)p_getAmountNumberWithNumberString:(id)a0;
- (id)p_getAmountStringWithNumberString:(id)a0;
- (void)updateAmountFontSize:(double)a0;
- (double)p_unitSymbolLabelHeight;
- (double)p_amountTextLabelHeight;
- (void)p_remakeConstraintWithAmountFontSize:(double)a0;
- (void)p_changeNumberFormatterPositiveFormat;
- (void)p_configAccessibilityLabel;
- (id)p_amountTextFont;
- (id)p_unitSymbolFont;
- (double)p_unitSymbolFontSize;
- (double)p_amountLabelRightSpace;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
