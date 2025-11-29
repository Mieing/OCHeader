@class NSString;

@interface IESECShopSkuItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *longImage;
@property (copy, nonatomic) NSString *standardImage;
@property (copy, nonatomic) NSString *skuId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
