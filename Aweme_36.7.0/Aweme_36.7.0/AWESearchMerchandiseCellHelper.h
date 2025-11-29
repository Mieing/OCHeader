@interface AWESearchMerchandiseCellHelper : NSObject

+ (id)getJumpSourceBtmTokenWithBtm:(id)a0 bstGroupType:(id)a1 responder:(id)a2 createBTM:(id)a3;
+ (id)makeNewCustomerStrongPriceAttributeText:(id)a0;
+ (id)formattedPriceWithOriginalPrice:(long long)a0;
+ (double)getTitleLableHeight:(id)a0 fixWidth:(double)a1 titleLines:(unsigned long long)a2 needUnifiedUIConfig:(BOOL)a3;
+ (id)makeStrongPriceAttributeText:(id)a0 spaceAfterSymbol:(double)a1 priceSuffixFont:(id)a2;
+ (void)setBCMParamsWhenJump1:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 bstGroupType:(id)a3 responder:(id)a4 createBTM:(id)a5;
+ (BOOL)enableCreateBTM;
+ (void)setBCMParamsWhenJump2:(id)a0 responder:(id)a1 createBTM:(id)a2;
+ (BOOL)shouldShowAdTagLabel:(id)a0;
+ (BOOL)shouldShowCouponList:(id)a0;
+ (double)getCouponHeight:(id)a0;
+ (id)formattedPriceWithOriginalPriceString:(long long)a0;
+ (id)getMerchandiseDescAttributedText:(id)a0 tagInfos:(id)a1 containerWidth:(double)a2 completion:(id /* block */)a3;
+ (double)getTitleLableHeight:(id)a0 fixWidth:(double)a1 titleLines:(unsigned long long)a2;
+ (BOOL)shouldShowAuthor:(id)a0;
+ (id)makeStrikePriceAttributeText:(id)a0 withPriceColor:(id)a1;
+ (id)makeStrongPriceAttributeText:(id)a0;
+ (id)drawVerticalLine:(id)a0;
+ (id)bstGroupTypeWithModel:(id)a0;
+ (id)createBTMWithInfo:(id)a0 clickedView:(id)a1 enterNewPage:(BOOL)a2;
+ (void)setBCMParamsWhenJump1:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 responder:(id)a3 createBTM:(id)a4;
+ (void)setBCMParamsWhenJump2:(id)a0 responder:(id)a1;
+ (void)setBCMParamsWhenJump1:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2 responder:(id)a3;

@end
