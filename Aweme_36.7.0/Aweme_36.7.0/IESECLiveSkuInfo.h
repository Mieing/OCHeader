@class NSString;

@interface IESECLiveSkuInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *skuId;
@property (nonatomic) long long stockNum;
@property (nonatomic) long long price;
@property (nonatomic) long long couponPrice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
