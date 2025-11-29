@class NSString, NSNumber;

@interface BDXBridgeUpdateRecommendGroupStateMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *recommend_id;
@property (retain, nonatomic) NSNumber *update_type;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
