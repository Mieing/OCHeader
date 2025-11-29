@class SKBuiltinBuffer_t;

@interface VoicePieceCtx : WXPBGeneratedMessage

@property (nonatomic) unsigned int startPos;
@property (nonatomic) unsigned int pieceLen;
@property (nonatomic) unsigned int pieceFlag;
@property (retain, nonatomic) SKBuiltinBuffer_t *pieceData;

+ (void)initialize;

@end
