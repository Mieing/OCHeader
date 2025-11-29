@class NSString, NSDictionary;

@interface BDXBridgeSearchOperateStructMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *tabType;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *operation;
@property (copy, nonatomic) NSString *struct_identifier;
@property (copy, nonatomic) NSDictionary *params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
