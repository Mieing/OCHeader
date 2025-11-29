@class NSData;

@interface BuiltinIP : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int port;
@property (retain, nonatomic) NSData *ip;
@property (retain, nonatomic) NSData *domain;

+ (void)initialize;

- (void)setDomain:(id)a0;
- (id)domain;
- (void)setIp:(id)a0;
- (id)ip;
- (void)setPort:(unsigned int)a0;
- (unsigned int)port;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;

@end
