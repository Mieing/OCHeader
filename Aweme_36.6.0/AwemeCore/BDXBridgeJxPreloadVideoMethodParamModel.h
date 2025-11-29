@class NSString, NSDictionary;

@interface BDXBridgeJxPreloadVideoMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSDictionary *awemeModel;

+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
