@class NSString, OpenSdkFaceDetectInfo_FaceDetectPromptButton;

@interface OpenSdkFaceDetectInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL shouldFaceDetect;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) OpenSdkFaceDetectInfo_FaceDetectPromptButton *prompt;

+ (void)initialize;

@end
