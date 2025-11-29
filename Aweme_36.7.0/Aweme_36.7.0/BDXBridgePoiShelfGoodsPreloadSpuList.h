@class NSString;

@interface BDXBridgePoiShelfGoodsPreloadSpuList : BDXBridgeModel

@property (copy, nonatomic) NSString *spuID;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *bizCode;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
