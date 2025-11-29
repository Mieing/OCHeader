@class NSString, NSNumber;

@interface BDXBridgeLifeCreationEditMusic : BDXBridgeModel

@property (copy, nonatomic) NSString *musicId;
@property (retain, nonatomic) NSNumber *showComponent;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
