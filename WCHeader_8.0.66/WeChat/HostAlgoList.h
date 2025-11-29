@class NSMutableArray;

@interface HostAlgoList : WXPBGeneratedMessage

@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *list;

+ (void)initialize;

- (void)setList:(id)a0;
- (id)list;
- (void)setCount:(unsigned int)a0;
- (unsigned int)count;

@end
