@class NSNumber;

@interface BDXBridgeLifeCreationAssetVideoConfig : BDXBridgeModel

@property (retain, nonatomic) NSNumber *maxVideoCount;
@property (retain, nonatomic) NSNumber *maxVideoDuration;
@property (retain, nonatomic) NSNumber *minVideoDuration;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
