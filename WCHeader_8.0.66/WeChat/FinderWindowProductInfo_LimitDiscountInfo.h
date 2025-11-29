@class NSString;

@interface FinderWindowProductInfo_LimitDiscountInfo : WXPBGeneratedMessage

@property (readonly, nonatomic) BOOL effective;
@property (nonatomic) unsigned int discountPrice;
@property (nonatomic) unsigned long long endTimeMs;
@property (retain, nonatomic) NSString *stockWording;
@property (nonatomic) unsigned int stock;

+ (void)initialize;

@end
