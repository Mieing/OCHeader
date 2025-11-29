@class VoiceAttr, BaseRequest, NSString, SKBuiltinBuffer_t, UploadVoiceCtx;

@interface UploadVoiceForTransRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *voiceId;
@property (retain, nonatomic) VoiceAttr *voiceAttr;
@property (retain, nonatomic) UploadVoiceCtx *uploadCtx;
@property (retain, nonatomic) SKBuiltinBuffer_t *data;
@property (nonatomic) int scene;
@property (retain, nonatomic) NSString *fromUserName;
@property (retain, nonatomic) NSString *toUserName;

+ (void)initialize;

@end
