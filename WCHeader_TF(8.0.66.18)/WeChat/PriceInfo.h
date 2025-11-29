@class DiscountList;

@interface PriceInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long orderPrice;
@property (nonatomic) unsigned long long productPrice;
@property (nonatomic) unsigned long long expressPrice;
@property (retain, nonatomic) DiscountList *discounts;

+ (void)initialize;

@end
