@class NSString, NSDictionary;

@interface BDXBridgeAddMicroAppAnchorMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *appUrl;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appTitle;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
