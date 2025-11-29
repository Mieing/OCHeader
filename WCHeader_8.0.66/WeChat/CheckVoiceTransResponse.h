@class BaseResponse, VoiceTransRes, QueryResCtx, UploadVoiceCtx;

@interface CheckVoiceTransResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int status;
@property (retain, nonatomic) VoiceTransRes *transRes;
@property (retain, nonatomic) UploadVoiceCtx *uploadCtx;
@property (retain, nonatomic) QueryResCtx *queryCtx;
@property (nonatomic) unsigned int notifyId;

+ (void)initialize;

@end
