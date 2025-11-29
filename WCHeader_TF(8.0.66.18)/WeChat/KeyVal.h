@interface KeyVal : WXPBGeneratedMessage

@property (nonatomic) unsigned int key;
@property (nonatomic) unsigned int val;

+ (void)initialize;

- (void)setVal:(unsigned int)a0;
- (unsigned int)val;
- (void)setKey:(unsigned int)a0;
- (unsigned int)key;

@end
