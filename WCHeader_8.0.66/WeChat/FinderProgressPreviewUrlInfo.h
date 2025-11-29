@class NSString;

@interface FinderProgressPreviewUrlInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *urlToken;
@property (nonatomic) unsigned int fileSize;
@property (retain, nonatomic) NSString *md5Sum;

+ (void)initialize;

- (void)setMd5Sum:(id)a0;
- (id)md5Sum;
- (void)setFileSize:(unsigned int)a0;
- (unsigned int)fileSize;
- (void)setUrlToken:(id)a0;
- (id)urlToken;
- (void)setUrl:(id)a0;
- (id)url;

@end
