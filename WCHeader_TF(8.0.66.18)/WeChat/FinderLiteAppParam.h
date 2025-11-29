@class NSString;

@interface FinderLiteAppParam : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSString *defaultUrl;
@property (retain, nonatomic) NSString *minVersion;
@property (nonatomic) unsigned int isTransparent;

+ (void)initialize;

- (void)setIsTransparent:(unsigned int)a0;
- (unsigned int)isTransparent;
- (void)setMinVersion:(id)a0;
- (id)minVersion;
- (void)setDefaultUrl:(id)a0;
- (id)defaultUrl;
- (void)setQuery:(id)a0;
- (id)query;
- (void)setPath:(id)a0;
- (id)path;
- (void)setAppid:(id)a0;
- (id)appid;

@end
