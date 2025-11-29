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

@end
