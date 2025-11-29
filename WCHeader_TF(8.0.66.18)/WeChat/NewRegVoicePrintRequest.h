@class BaseRequest, NSString, VoicePieceCtx, SKBuiltinBuffer_t;

@interface NewRegVoicePrintRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int step;
@property (nonatomic) unsigned int voiceTicket;
@property (retain, nonatomic) VoicePieceCtx *pieceData;
@property (retain, nonatomic) NSString *mobileVerifyTicket;
@property (retain, nonatomic) NSString *voiceKey;
@property (retain, nonatomic) SKBuiltinBuffer_t *randomEncryKey;

+ (void)initialize;

@end
