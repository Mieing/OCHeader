@class NSString, BDXBridgeUploadVideoToVODAuthConfig, BDXBridgeUploadVideoToVODUploadConfig;

@interface BDXBridgeUploadVideoToVODMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) BDXBridgeUploadVideoToVODAuthConfig *authConfig;
@property (retain, nonatomic) BDXBridgeUploadVideoToVODUploadConfig *uploadConfig;

+ (id)requiredKeyPaths;
+ (id)authConfigJSONTransformer;
+ (id)uploadConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
