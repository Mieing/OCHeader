@class NSArray;

@interface BDXBridgeLifePictureCityInfoMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSArray *location;

+ (id)locationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
