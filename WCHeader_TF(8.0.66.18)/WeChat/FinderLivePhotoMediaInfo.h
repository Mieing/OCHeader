@class NSString;

@interface FinderLivePhotoMediaInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (nonatomic) float width;
@property (nonatomic) float height;
@property (retain, nonatomic) NSString *md5Sum;
@property (nonatomic) unsigned long long fileSize;
@property (retain, nonatomic) NSString *urlToken;
@property (nonatomic) unsigned int fileType;
@property (nonatomic) unsigned int playLen;
@property (retain, nonatomic) NSString *decodeKey;

+ (void)initialize;

- (void)setDecodeKey:(id)a0;
- (id)decodeKey;
- (void)setPlayLen:(unsigned int)a0;
- (unsigned int)playLen;
- (void)setFileType:(unsigned int)a0;
- (unsigned int)fileType;
- (void)setUrlToken:(id)a0;
- (id)urlToken;
- (void)setFileSize:(unsigned long long)a0;
- (unsigned long long)fileSize;
- (void)setMd5Sum:(id)a0;
- (id)md5Sum;
- (void)setHeight:(float)a0;
- (float)height;
- (void)setWidth:(float)a0;
- (float)width;
- (void)setUrl:(id)a0;
- (id)url;

@end
