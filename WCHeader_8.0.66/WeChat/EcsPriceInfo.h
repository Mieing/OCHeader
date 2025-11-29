@interface EcsPriceInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long productPrice;
@property (nonatomic) unsigned long long orderPrice;
@property (nonatomic) unsigned int freight;
@property (nonatomic) unsigned long long discountedPrice;
@property (nonatomic) BOOL isDiscounted;
@property (nonatomic) unsigned long long originalOrderPrice;
@property (nonatomic) unsigned long long estimateProductPrice;
@property (nonatomic) BOOL useDeduction;
@property (nonatomic) unsigned long long deductionPrice;
@property (nonatomic) unsigned long long deductionScore;
@property (nonatomic) BOOL payExtraFreight;
@property (nonatomic) unsigned long long wxaVipDiscountedPrice;
@property (nonatomic) BOOL isWxaVipDiscounted;
@property (nonatomic) unsigned long long cashCouponDiscountPrice;
@property (nonatomic) unsigned long long platformDiscountDiscountedPrice;
@property (nonatomic) BOOL isPlatformDiscountDiscounted;
@property (nonatomic) unsigned long long bulkbuyDiscountPrice;

+ (void)initialize;

@end
