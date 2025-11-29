@class NSString;

@interface BDXBridgePoiChooseImageMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *poiBundleKey;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL shootReward;
@property (copy, nonatomic) NSString *enterFrom;

+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
