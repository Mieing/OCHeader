@class NSString;

@interface WeVisModelSubtypeInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int subtype;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *filename;

+ (void)initialize;

- (void)setFilename:(id)a0;
- (id)filename;
- (void)setMd5:(id)a0;
- (id)md5;
- (void)setSubtype:(unsigned int)a0;
- (unsigned int)subtype;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;

@end
