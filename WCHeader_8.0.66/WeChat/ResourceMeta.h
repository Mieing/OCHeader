@class NSString, NSMutableArray, NSData;

@interface ResourceMeta : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *md5;
@property (nonatomic) unsigned int resVersion;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int fileFlag;
@property (retain, nonatomic) NSMutableArray *eccmd5SignatureList;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *originalMd5;
@property (nonatomic) unsigned int fileSize;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *originalSha1;

+ (void)initialize;

- (void)setOriginalSha1:(id)a0;
- (id)originalSha1;
- (void)setDesc:(id)a0;
- (id)desc;
- (void)setFileSize:(unsigned int)a0;
- (unsigned int)fileSize;
- (void)setOriginalMd5:(id)a0;
- (id)originalMd5;
- (void)setData:(id)a0;
- (id)data;
- (void)setEccmd5SignatureList:(id)a0;
- (id)eccmd5SignatureList;
- (void)setFileFlag:(unsigned int)a0;
- (unsigned int)fileFlag;
- (void)setUrl:(id)a0;
- (id)url;
- (void)setResVersion:(unsigned int)a0;
- (unsigned int)resVersion;
- (void)setMd5:(id)a0;
- (id)md5;

@end
