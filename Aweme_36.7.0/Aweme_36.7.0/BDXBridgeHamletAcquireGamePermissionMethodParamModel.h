@class NSString, NSArray, NSDictionary;

@interface BDXBridgeHamletAcquireGamePermissionMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *mpID;
@property (retain, nonatomic) NSArray *scopes;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
