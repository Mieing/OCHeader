@class NSString, NSDictionary;

@interface BDXBridgeOpenPlatformOpenMiniAppMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *versionType;
@property (copy, nonatomic) NSDictionary *query;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
