@class NSString, SKBuiltinBuffer_t;

@interface Package : WXPBGeneratedMessage

@property (nonatomic) int id;
@property (nonatomic) int version;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned int size;
@property (retain, nonatomic) SKBuiltinBuffer_t *thumb;
@property (retain, nonatomic) NSString *packName;
@property (retain, nonatomic) SKBuiltinBuffer_t *ext;
@property (retain, nonatomic) NSString *md5;

+ (void)initialize;

- (void)setMd5:(id)a0;
- (id)md5;
- (void)setExt:(id)a0;
- (id)ext;
- (void)setPackName:(id)a0;
- (id)packName;
- (void)setThumb:(id)a0;
- (id)thumb;
- (void)setSize:(unsigned int)a0;
- (unsigned int)size;
- (void)setName:(id)a0;
- (id)name;
- (void)setVersion:(int)a0;
- (int)version;
- (void)setId:(int)a0;
- (int)id;

@end
