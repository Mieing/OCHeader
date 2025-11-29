@class NSDictionary, NSString;

@interface IESECGoodsDetailSkuMeta : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *skuMappings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
