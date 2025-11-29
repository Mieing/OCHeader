@class NSString;

@interface BDXBridgePoiFTaskMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *f_scene_type;
@property (copy, nonatomic) NSString *f_task_type;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
