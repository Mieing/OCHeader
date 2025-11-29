@class TextViewData, DynamicColor;

@interface MoneyInputTextFieldViewData : WXPBGeneratedMessage

@property (retain, nonatomic) TextViewData *title;
@property (retain, nonatomic) TextViewData *currencySymbol;
@property (nonatomic) unsigned long long amount;
@property (retain, nonatomic) TextViewData *footerDesc;
@property (retain, nonatomic) DynamicColor *inputAmountColor;
@property (retain, nonatomic) DynamicColor *cursorColor;
@property (retain, nonatomic) DynamicColor *hintTextColor;

+ (void)initialize;

@end
