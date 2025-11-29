@class NSString, BDUGLuckyUploadVideoToVODUploadConfig, BDUGLuckyUploadVideoToVODAuthConfig;

@interface BDUGLuckyUploadVideoToVODMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *videoPath;
@property (retain, nonatomic) BDUGLuckyUploadVideoToVODAuthConfig *authConfig;
@property (retain, nonatomic) BDUGLuckyUploadVideoToVODUploadConfig *uploadConfig;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
