@class SKBuiltinBuffer_t;

@interface VoipCompleteStatus : WXPBGeneratedMessage

@property (nonatomic) int cmdId;
@property (nonatomic) unsigned int uin;
@property (nonatomic) unsigned int key;
@property (retain, nonatomic) SKBuiltinBuffer_t *buffer;

+ (void)initialize;

@end
