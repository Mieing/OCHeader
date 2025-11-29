@class NSString;

@interface LifeCardSpuInfoV2 : GPBMessage

@property (copy, nonatomic) NSString *spuId;
@property (nonatomic) BOOL hasSpuId;
@property (copy, nonatomic) NSString *price;
@property (nonatomic) BOOL hasPrice;
@property (copy, nonatomic) NSString *originPrice;
@property (nonatomic) BOOL hasOriginPrice;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL hasDesc;
@property (copy, nonatomic) NSString *priceSuffix;
@property (nonatomic) BOOL hasPriceSuffix;

+ (id)descriptor;

@end
