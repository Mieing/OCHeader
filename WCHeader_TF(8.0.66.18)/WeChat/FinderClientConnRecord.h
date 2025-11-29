@interface FinderClientConnRecord : WXPBGeneratedMessage

@property (nonatomic) unsigned int protoType;
@property (nonatomic) BOOL succeed;
@property (nonatomic) unsigned long long beginTimeMs;
@property (nonatomic) unsigned long long costMs;

+ (void)initialize;

@end
