@class NSNumber;

@interface BDXBridgeEcGetCurrentGCJLocationData : BDXBridgeModel

@property (retain, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSNumber *longitude;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
