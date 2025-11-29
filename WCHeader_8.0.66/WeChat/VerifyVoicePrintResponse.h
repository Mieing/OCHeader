@class VoicePieceCtx, BaseResponse;

@interface VerifyVoicePrintResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) VoicePieceCtx *nextPiece;
@property (nonatomic) unsigned int result;
@property (nonatomic) unsigned int voiceTicket;

+ (void)initialize;

@end
