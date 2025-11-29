@class SKBuiltinBuffer_t;

@interface ECDHKey : WXPBGeneratedMessage

@property (nonatomic) int nid;
@property (retain, nonatomic) SKBuiltinBuffer_t *key;

+ (void)initialize;

- (void)setKey:(id)a0;
- (id)key;
- (void)setNid:(int)a0;
- (int)nid;

@end
