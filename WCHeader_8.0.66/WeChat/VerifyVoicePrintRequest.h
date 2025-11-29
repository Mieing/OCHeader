@class BaseRequest, VoicePieceCtx, NSString;

@interface VerifyVoicePrintRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) VoicePieceCtx *piece;
@property (nonatomic) unsigned int voiceTicket;
@property (nonatomic) unsigned int resId;
@property (retain, nonatomic) NSString *verifyTicket;

+ (void)initialize;

@end
