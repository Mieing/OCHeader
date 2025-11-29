@class NSNumber;

@interface BDXBridgeLifePictureLocationInfoTimeRange : BDXBridgeModel

@property (retain, nonatomic) NSNumber *start;
@property (retain, nonatomic) NSNumber *end;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
