@class NSNumber, BDXBridgeLifeSearchWithQueryTimeRange, NSArray;

@interface BDXBridgeLifeSearchWithQueryMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *fileType;
@property (nonatomic) BOOL unique;
@property (retain, nonatomic) BDXBridgeLifeSearchWithQueryTimeRange *timeRange;
@property (retain, nonatomic) NSArray *keyWords;
@property (retain, nonatomic) NSArray *localIds;

+ (id)requiredKeyPaths;
+ (id)timeRangeJSONTransformer;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
