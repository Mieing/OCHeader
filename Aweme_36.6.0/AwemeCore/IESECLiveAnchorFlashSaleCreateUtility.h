@interface IESECLiveAnchorFlashSaleCreateUtility : NSObject

+ (double)buttonMargin;
+ (id)placeHolderColor;
+ (double)itemTopMargin;
+ (BOOL)isValidPrice:(id)a0 showToast:(BOOL)a1 acceptZero:(BOOL)a2;
+ (BOOL)isValidStock:(id)a0 maxLimit:(long long)a1 showToast:(BOOL)a2;
+ (BOOL)isValidDeposit:(id)a0 showToast:(BOOL)a1 acceptZero:(BOOL)a2;
+ (BOOL)isValidPrice:(id)a0 showToast:(BOOL)a1 acceptZero:(BOOL)a2 acceptDecimals:(BOOL)a3 priceTitle:(id)a4;
+ (BOOL)isValidPriceLiterals:(id)a0 acceptDecimals:(BOOL)a1;
+ (void)makeToast:(id)a0 show:(BOOL)a1;
+ (id)buttonColorWithEnableStatus:(BOOL)a0;
+ (id)buttonFontColorWithEnableStatus:(BOOL)a0;
+ (id)itemSubTitleLabel;
+ (id)itemTextField;
+ (id)itemLabelColor;
+ (id)lineColor;
+ (double)buttonCornerRadius;
+ (id)actionButtonFont;
+ (double)itemHeight;
+ (id)itemLabel;
+ (double)imageCornerRadius;

@end
