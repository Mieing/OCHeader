@class BaseRequest, NSString, VoicePieceCtx, SKBuiltinBuffer_t;

@interface VerifyVoicePrintRsaRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) VoicePieceCtx *piece;
@property (nonatomic) unsigned int voiceTicket;
@property (nonatomic) unsigned int resId;
@property (retain, nonatomic) NSString *verifyTicket;
@property (retain, nonatomic) SKBuiltinBuffer_t *randomEncryKey;

+ (void)initialize;

@end
