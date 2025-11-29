@class NSString;

@interface BDXBridgeLifeCreationAssetTrack : BDXBridgeModel

@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *enterFrom;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
