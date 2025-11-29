@class NSString, IESECURLModel, NSArray;

@interface IESECGoodsPropertySKUModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *skuId;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) IESECURLModel *pic;
@property (copy, nonatomic) NSArray *subProducts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subProductsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
