@class NSNumber;

@interface BDXBridgeGetLocationMethodResultModel : BDXBridgeModel

@property (nonatomic) BOOL enable;
@property (retain, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSNumber *longitude;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
