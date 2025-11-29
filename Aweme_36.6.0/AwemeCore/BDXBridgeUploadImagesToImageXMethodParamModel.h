@class BDXBridgeUploadImagesToImageXAuthConfig, NSArray, BDXBridgeUploadImagesToImageXUploadConfig, BDXBridgeUploadImagesToImageXEncryptionConfig;

@interface BDXBridgeUploadImagesToImageXMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) BDXBridgeUploadImagesToImageXAuthConfig *authConfig;
@property (copy, nonatomic) BDXBridgeUploadImagesToImageXUploadConfig *uploadConfig;
@property (copy, nonatomic) NSArray *filePaths;
@property (copy, nonatomic) BDXBridgeUploadImagesToImageXEncryptionConfig *encryptionConfig;

+ (id)requiredKeyPaths;
+ (id)authConfigJSONTransformer;
+ (id)uploadConfigJSONTransformer;
+ (id)encryptionConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
