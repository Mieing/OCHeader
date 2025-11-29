@interface FinderClientConnRecord : WXPBGeneratedMessage

@property (nonatomic) unsigned int protoType;
@property (nonatomic) BOOL succeed;
@property (nonatomic) unsigned long long beginTimeMs;
@property (nonatomic) unsigned long long costMs;

+ (void)initialize;

- (void)setCostMs:(unsigned long long)a0;
- (unsigned long long)costMs;
- (void)setBeginTimeMs:(unsigned long long)a0;
- (unsigned long long)beginTimeMs;
- (void)setSucceed:(BOOL)a0;
- (BOOL)succeed;
- (void)setProtoType:(unsigned int)a0;
- (unsigned int)protoType;

@end
