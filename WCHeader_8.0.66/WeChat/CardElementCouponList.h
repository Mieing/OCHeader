@class NSString, NSMutableArray, CardMiniAppInfo;

@interface CardElementCouponList : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *userCardId;
@property (retain, nonatomic) NSString *couponName;
@property (retain, nonatomic) NSString *couponDesc;
@property (retain, nonatomic) NSString *couponUseWay;
@property (retain, nonatomic) NSString *couponColor;
@property (retain, nonatomic) NSString *couponBackUrl;
@property (retain, nonatomic) NSMutableArray *couponLabel;
@property (nonatomic) unsigned int couponType;
@property (retain, nonatomic) NSString *couponIcon;
@property (retain, nonatomic) NSString *couponBorderColor;
@property (retain, nonatomic) NSString *couponNameColor;
@property (nonatomic) unsigned int couponNameColorAlpha;
@property (retain, nonatomic) NSString *couponDescColor;
@property (nonatomic) unsigned int couponDescColorAlpha;
@property (retain, nonatomic) NSString *cardIconUrl;
@property (nonatomic) int cardElementOpType;
@property (retain, nonatomic) NSString *cardElementJumpUrl;
@property (retain, nonatomic) CardMiniAppInfo *cardElementMiniAppInfo;
@property (retain, nonatomic) NSString *cardElementNativeUrl;
@property (retain, nonatomic) NSString *cardSubLabel;

+ (void)initialize;

@end
