@class VoicePieceCtx, BaseResponse;

@interface RegisterVoicePrintResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int resgisterRet;
@property (nonatomic) unsigned int nextStep;
@property (retain, nonatomic) VoicePieceCtx *nextPiece;
@property (nonatomic) unsigned int voiceTicket;

+ (void)initialize;

@end
