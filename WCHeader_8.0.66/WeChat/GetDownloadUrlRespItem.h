@class NSString, RequestPackageInfo;

@interface GetDownloadUrlRespItem : WXPBGeneratedMessage

@property (nonatomic) int errcode;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) unsigned int lifespan;
@property (nonatomic) unsigned int appVersion;
@property (nonatomic) BOOL isPatch;
@property (nonatomic) BOOL isZstd;
@property (retain, nonatomic) NSString *customVersion;
@property (retain, nonatomic) RequestPackageInfo *reqPackageInfo;
@property (retain, nonatomic) NSString *newCustomVersion;
@property (nonatomic) unsigned int crc32;

+ (void)initialize;

- (void)setCrc32:(unsigned int)a0;
- (unsigned int)crc32;
- (void)setNewCustomVersion:(id)a0;
- (id)newCustomVersion;
- (void)setReqPackageInfo:(id)a0;
- (id)reqPackageInfo;
- (void)setCustomVersion:(id)a0;
- (id)customVersion;
- (void)setIsZstd:(BOOL)a0;
- (BOOL)isZstd;
- (void)setIsPatch:(BOOL)a0;
- (BOOL)isPatch;
- (void)setAppVersion:(unsigned int)a0;
- (unsigned int)appVersion;
- (void)setLifespan:(unsigned int)a0;
- (unsigned int)lifespan;
- (void)setMd5:(id)a0;
- (id)md5;
- (void)setUrl:(id)a0;
- (id)url;
- (void)setErrcode:(int)a0;
- (int)errcode;

@end
