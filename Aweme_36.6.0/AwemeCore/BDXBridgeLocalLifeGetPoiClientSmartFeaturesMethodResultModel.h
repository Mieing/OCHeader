@class NSDictionary;

@interface BDXBridgeLocalLifeGetPoiClientSmartFeaturesMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSDictionary *staticFeatures;
@property (copy, nonatomic) NSDictionary *localLifeFeatures;
@property (copy, nonatomic) NSDictionary *solariaFeatures;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
