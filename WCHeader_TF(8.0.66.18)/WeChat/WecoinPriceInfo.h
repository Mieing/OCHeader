@class NSString;

@interface WecoinPriceInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *productId;
@property (nonatomic) unsigned int wecoinCount;
@property (nonatomic) unsigned int price;
@property (nonatomic) unsigned int discountWecoinCount;
@property (nonatomic) BOOL newUserDiscount;

+ (void)initialize;

@end
