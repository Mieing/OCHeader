@class NSString, NSNumber;

@interface BDXBridgeLifeCreationPublishMusic : BDXBridgeModel

@property (copy, nonatomic) NSString *musicId;
@property (retain, nonatomic) NSNumber *isAuto;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
