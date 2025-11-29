@class NSString;

@interface ComboData_ComboInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *skuId;
@property (nonatomic) long long months;
@property (nonatomic) long long originalPrice;
@property (nonatomic) long long salePrice;

+ (id)descriptor;

@end
