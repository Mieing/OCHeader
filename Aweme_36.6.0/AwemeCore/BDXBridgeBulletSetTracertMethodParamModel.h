@class NSDictionary;

@interface BDXBridgeBulletSetTracertMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSDictionary *timelineDict;
@property (copy, nonatomic) NSDictionary *categoryDict;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
