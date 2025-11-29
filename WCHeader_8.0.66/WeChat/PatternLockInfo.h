@class SKBuiltinBuffer_t;

@interface PatternLockInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int patternVersion;
@property (retain, nonatomic) SKBuiltinBuffer_t *sign;
@property (nonatomic) unsigned int lockStatus;

+ (void)initialize;

- (void)setLockStatus:(unsigned int)a0;
- (unsigned int)lockStatus;
- (void)setSign:(id)a0;
- (id)sign;
- (void)setPatternVersion:(unsigned int)a0;
- (unsigned int)patternVersion;

@end
