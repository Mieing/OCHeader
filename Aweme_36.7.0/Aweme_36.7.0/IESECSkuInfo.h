@class NSString;

@interface IESECSkuInfo : GPBMessage

@property (copy, nonatomic) NSString *skuId;
@property (nonatomic) long long stockNum;
@property (nonatomic) long long price;
@property (nonatomic) long long couponPrice;

+ (id)descriptor;

@end
