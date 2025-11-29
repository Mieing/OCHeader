@class NSMutableArray;

@interface AxAuthSecRespList : WXPBGeneratedMessage

@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *list;
@property (nonatomic) unsigned int axTicketExpireTime;
@property (nonatomic) unsigned int axTicketAutoRetry;

+ (void)initialize;

- (void)setAxTicketAutoRetry:(unsigned int)a0;
- (unsigned int)axTicketAutoRetry;
- (void)setAxTicketExpireTime:(unsigned int)a0;
- (unsigned int)axTicketExpireTime;
- (void)setList:(id)a0;
- (id)list;
- (void)setCount:(unsigned int)a0;
- (unsigned int)count;

@end
