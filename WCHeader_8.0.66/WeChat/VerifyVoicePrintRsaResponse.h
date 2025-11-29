@class NSString, VoicePieceCtx, BaseResponse;

@interface VerifyVoicePrintRsaResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) VoicePieceCtx *nextPiece;
@property (nonatomic) unsigned int result;
@property (nonatomic) unsigned int voiceTicket;
@property (retain, nonatomic) NSString *authPwd;

+ (void)initialize;

@end
