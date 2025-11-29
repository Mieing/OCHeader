@class QueryResCtx, VoiceTransRes, BaseResponse;

@interface GetVoiceTransResResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) VoiceTransRes *transRes;
@property (retain, nonatomic) QueryResCtx *queryCtx;

+ (void)initialize;

@end
