@class NSString, NSNumber;

@interface BDXBridgeCheckDesktopGuideCanShowMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *passControlLevel;
@property (copy, nonatomic) NSString *guideStyleType;
@property (retain, nonatomic) NSNumber *passAlgorithm;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
