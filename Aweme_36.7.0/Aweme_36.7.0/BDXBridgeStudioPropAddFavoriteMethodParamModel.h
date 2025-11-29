@class NSString;

@interface BDXBridgeStudioPropAddFavoriteMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *prop_id;
@property (nonatomic) BOOL favorite;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
