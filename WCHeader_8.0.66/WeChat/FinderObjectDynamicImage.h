@class NSString;

@interface FinderObjectDynamicImage : WXPBGeneratedMessage

@property (nonatomic) unsigned int imageName;
@property (retain, nonatomic) NSString *lightUrl;
@property (retain, nonatomic) NSString *darkUrl;
@property (retain, nonatomic) NSString *key;

+ (void)initialize;

- (void)setKey:(id)a0;
- (id)key;
- (void)setDarkUrl:(id)a0;
- (id)darkUrl;
- (void)setLightUrl:(id)a0;
- (id)lightUrl;
- (void)setImageName:(unsigned int)a0;
- (unsigned int)imageName;

@end
