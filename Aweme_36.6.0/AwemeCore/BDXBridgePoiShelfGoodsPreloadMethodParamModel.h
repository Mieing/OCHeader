@class NSString, NSArray, NSDictionary;

@interface BDXBridgePoiShelfGoodsPreloadMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) NSString *poiEnterID;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) NSArray *spuList;
@property (copy, nonatomic) NSDictionary *logParams;

+ (id)requiredKeyPaths;
+ (id)spuListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
