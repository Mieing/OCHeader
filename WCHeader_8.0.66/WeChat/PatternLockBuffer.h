@class SKBuiltinBuffer_t;

@interface PatternLockBuffer : WXPBGeneratedMessage

@property (nonatomic) unsigned int uin;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) SKBuiltinBuffer_t *svrpatternhash;
@property (nonatomic) unsigned int lockstatus;
@property (retain, nonatomic) SKBuiltinBuffer_t *sign;

+ (void)initialize;

@end
