@class NSString;

@interface BDXBridgeAddShortcutMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *id;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *middlePageUrl;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
