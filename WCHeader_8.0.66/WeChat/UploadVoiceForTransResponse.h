@class UploadVoiceCtx, BaseResponse;

@interface UploadVoiceForTransResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) UploadVoiceCtx *uploadCtx;

+ (void)initialize;

@end
