@class NSString, VoicePieceCtx, BaseResponse;

@interface NewRegVoicePrintResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int resgisterRet;
@property (nonatomic) unsigned int nextStep;
@property (retain, nonatomic) VoicePieceCtx *nextPiece;
@property (nonatomic) unsigned int voiceTicket;
@property (retain, nonatomic) NSString *biosigTicket;

+ (void)initialize;

@end
