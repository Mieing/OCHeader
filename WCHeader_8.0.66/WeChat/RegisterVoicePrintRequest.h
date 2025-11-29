@class BaseRequest, VoicePieceCtx;

@interface RegisterVoicePrintRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int step;
@property (nonatomic) unsigned int voiceTicket;
@property (retain, nonatomic) VoicePieceCtx *pieceData;
@property (nonatomic) unsigned int resId;

+ (void)initialize;

@end
