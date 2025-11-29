@class NSNumber;

@interface BDXBridgeLifeSearchWithQueryTimeRange : BDXBridgeModel

@property (retain, nonatomic) NSNumber *start;
@property (retain, nonatomic) NSNumber *end;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
