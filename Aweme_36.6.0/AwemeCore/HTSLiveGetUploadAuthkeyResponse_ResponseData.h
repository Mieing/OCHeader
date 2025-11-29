@class HTSLiveGetUploadAuthkeyResponse_TokenConfig;

@interface HTSLiveGetUploadAuthkeyResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveGetUploadAuthkeyResponse_TokenConfig *imageToken;
@property (nonatomic) BOOL hasImageToken;

+ (id)descriptor;

@end
