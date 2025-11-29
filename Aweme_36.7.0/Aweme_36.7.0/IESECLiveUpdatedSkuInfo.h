@class NSString, NSMutableDictionary;

@interface IESECLiveUpdatedSkuInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSMutableDictionary *skus;
@property (readonly, nonatomic) unsigned long long skus_Count;
@property (nonatomic) long long minPrice;
@property (nonatomic) long long maxPrice;
@property (nonatomic) long long unuseMinPrice;
@property (nonatomic) long long couponPrice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)skusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
