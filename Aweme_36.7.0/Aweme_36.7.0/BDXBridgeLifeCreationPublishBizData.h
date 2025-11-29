@class NSString;

@interface BDXBridgeLifeCreationPublishBizData : BDXBridgeModel

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *shootWay;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
