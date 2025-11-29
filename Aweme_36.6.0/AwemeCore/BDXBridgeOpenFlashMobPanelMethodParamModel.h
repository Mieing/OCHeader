@class NSString;

@interface BDXBridgeOpenFlashMobPanelMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *flashMobID;
@property (copy, nonatomic) NSString *aweme;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *shootWay;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
