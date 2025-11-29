@class NSMutableArray;

@interface ShowStyleKey : WXPBGeneratedMessage

@property (nonatomic) unsigned int keyCount;
@property (retain, nonatomic) NSMutableArray *key;

+ (void)initialize;

- (void)setKey:(id)a0;
- (id)key;
- (void)setKeyCount:(unsigned int)a0;
- (unsigned int)keyCount;

@end
