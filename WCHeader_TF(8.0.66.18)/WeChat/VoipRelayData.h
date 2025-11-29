@class SKBuiltinBuffer_t;

@interface VoipRelayData : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) SKBuiltinBuffer_t *buffer;

+ (void)initialize;

@end
