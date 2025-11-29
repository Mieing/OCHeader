@class NSString, FinderContact;

@interface FinderLiveAggregationCardProduct : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *productImgUrl;
@property (retain, nonatomic) NSString *productTitle;
@property (retain, nonatomic) FinderContact *contact;
@property (nonatomic) unsigned int priceAfterCoupon;
@property (nonatomic) unsigned int hotSellCount;
@property (nonatomic) unsigned long long productId;

+ (void)initialize;

@end
