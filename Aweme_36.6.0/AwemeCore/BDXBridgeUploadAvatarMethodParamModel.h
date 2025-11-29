@class BDXBridgeUploadAvatarParams;

@interface BDXBridgeUploadAvatarMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) BDXBridgeUploadAvatarParams *params;

+ (id)requiredKeyPaths;
+ (id)paramsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
