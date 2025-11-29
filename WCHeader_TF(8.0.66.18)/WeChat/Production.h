@class NSString, NSMutableArray;

@interface Production : WXPBGeneratedMessage

@property (nonatomic) unsigned int skuCount;
@property (retain, nonatomic) NSMutableArray *skus;
@property (nonatomic) unsigned int count;
@property (nonatomic) unsigned int realPrice;
@property (retain, nonatomic) NSString *priceType;
@property (retain, nonatomic) NSString *pid;
@property (retain, nonatomic) NSString *safeUrl;
@property (retain, nonatomic) NSString *skuId;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *thumbUrl;
@property (nonatomic) unsigned int subType;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *preferentialPrice;
@property (nonatomic) unsigned int discountCount;
@property (retain, nonatomic) NSMutableArray *discounts;

+ (void)initialize;

@end
