@class NSString, NSArray;

@interface IESECGoodsDetailSchemaUnion : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *skuSchema;
@property (retain, nonatomic) NSString *orderSchema;
@property (retain, nonatomic) NSString *ultimateBuySchema;
@property (retain, nonatomic) NSArray *ultimateParamsFromSKU;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
