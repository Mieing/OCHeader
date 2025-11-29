@class FinderWindowProductInfo, NSString, FinderShopCouponInfo_CouponPromoteMoneyOffExtraInfo, FinderShopCouponInfo_AcquireInfo, FinderShopCouponInfo_Condition;

@interface FinderShopCouponInfo : WXPBGeneratedMessage

@property (readonly, copy, nonatomic) NSString *typeWording;
@property (retain, nonatomic) NSString *couponId;
@property (retain, nonatomic) NSString *stockId;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int couponStatus;
@property (nonatomic) unsigned int stockStatus;
@property (retain, nonatomic) NSString *buttonWording;
@property (nonatomic) unsigned long long couponValue;
@property (nonatomic) unsigned long long couponMinimum;
@property (retain, nonatomic) NSString *couponName;
@property (retain, nonatomic) FinderWindowProductInfo *associatedProduct;
@property (nonatomic) unsigned long long expiryTimestamp;
@property (nonatomic) unsigned int remainCouponCount;
@property (nonatomic) unsigned int couponSourceType;
@property (retain, nonatomic) NSString *sourceMerchantName;
@property (nonatomic) unsigned int isSingle;
@property (retain, nonatomic) FinderShopCouponInfo_Condition *condition;
@property (retain, nonatomic) NSString *expiredWording;
@property (retain, nonatomic) FinderShopCouponInfo_AcquireInfo *acquireInfo;
@property (retain, nonatomic) NSString *discountWording;
@property (nonatomic) unsigned int clickButtonAction;
@property (retain, nonatomic) NSString *couponTypeWording;
@property (nonatomic) unsigned int clickButtonStyle;
@property (retain, nonatomic) FinderShopCouponInfo_CouponPromoteMoneyOffExtraInfo *moneyOffInfo;
@property (retain, nonatomic) NSString *anchorCouponHintWording;
@property (nonatomic) unsigned int couponPromoteType;
@property (retain, nonatomic) NSString *couponDescInfo;
@property (retain, nonatomic) NSString *couponHeadWording;
@property (nonatomic) unsigned int taskType;
@property (retain, nonatomic) NSString *tailBackgroundUrl;
@property (retain, nonatomic) NSString *restrictWording;
@property (nonatomic) BOOL hasRestrictDetail;
@property (nonatomic) unsigned int restrictType;

+ (void)initialize;

@end
