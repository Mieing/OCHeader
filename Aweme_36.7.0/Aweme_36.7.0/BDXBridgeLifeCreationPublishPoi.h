@class NSString;

@interface BDXBridgeLifeCreationPublishPoi : BDXBridgeModel

@property (copy, nonatomic) NSString *poiId;
@property (copy, nonatomic) NSString *poiName;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
