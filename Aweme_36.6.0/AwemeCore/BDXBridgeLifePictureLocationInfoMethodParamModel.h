@class NSNumber, BDXBridgeLifePictureLocationInfoTimeRange, NSArray;

@interface BDXBridgeLifePictureLocationInfoMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *page;
@property (retain, nonatomic) NSNumber *count;
@property (retain, nonatomic) BDXBridgeLifePictureLocationInfoTimeRange *timeRange;
@property (retain, nonatomic) NSArray *localIds;

+ (id)requiredKeyPaths;
+ (id)timeRangeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
