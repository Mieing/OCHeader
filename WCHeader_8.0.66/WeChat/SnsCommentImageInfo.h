@class NSString;

@interface SnsCommentImageInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *token;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int heightPercentage;
@property (nonatomic) unsigned int fileSize;
@property (nonatomic) unsigned int minArea;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSString *thumbUrlToken;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *encIdx;
@property (retain, nonatomic) NSString *thumbKey;
@property (retain, nonatomic) NSString *thumbEncIdx;
@property (retain, nonatomic) NSString *mediaId;
@property (retain, nonatomic) NSString *md5;

+ (void)initialize;

- (void)setMd5:(id)a0;
- (id)md5;
- (void)setMediaId:(id)a0;
- (id)mediaId;
- (void)setThumbEncIdx:(id)a0;
- (id)thumbEncIdx;
- (void)setThumbKey:(id)a0;
- (id)thumbKey;
- (void)setEncIdx:(id)a0;
- (id)encIdx;
- (void)setKey:(id)a0;
- (id)key;
- (void)setThumbUrlToken:(id)a0;
- (id)thumbUrlToken;
- (void)setThumbUrl:(id)a0;
- (id)thumbUrl;
- (void)setMinArea:(unsigned int)a0;
- (unsigned int)minArea;
- (void)setFileSize:(unsigned int)a0;
- (unsigned int)fileSize;
- (void)setHeightPercentage:(unsigned int)a0;
- (unsigned int)heightPercentage;
- (void)setHeight:(unsigned int)a0;
- (unsigned int)height;
- (void)setWidth:(unsigned int)a0;
- (unsigned int)width;
- (void)setToken:(id)a0;
- (id)token;
- (void)setUrl:(id)a0;
- (id)url;

@end
