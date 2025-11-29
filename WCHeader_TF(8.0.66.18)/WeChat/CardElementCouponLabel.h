@class NSString, CardMiniAppInfo;

@interface CardElementCouponLabel : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *couponLabelName;
@property (retain, nonatomic) NSString *couponLabelTextColor;
@property (retain, nonatomic) NSString *couponLabelBackColor;
@property (nonatomic) unsigned int couponLabelJumpFlag;
@property (retain, nonatomic) CardMiniAppInfo *couponLabelMiniAppInfo;
@property (nonatomic) unsigned int couponLabelBackColorAlpha;

+ (void)initialize;

@end
