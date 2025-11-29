@class BaseRequest, NSString;

@interface GetWxaAppCDNDownloadUrlRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) unsigned int appVersion;
@property (retain, nonatomic) NSString *versionMd5;
@property (nonatomic) unsigned int packageType;
@property (nonatomic) unsigned int oldAppVersion;
@property (retain, nonatomic) NSString *moduleName;
@property (nonatomic) BOOL gzCompress;

+ (void)initialize;

@end
