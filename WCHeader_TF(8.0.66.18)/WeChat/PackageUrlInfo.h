@class NSString;

@interface PackageUrlInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *moduleName;
@property (nonatomic) unsigned int packageType;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) BOOL isPatch;
@property (nonatomic) BOOL isZstd;
@property (nonatomic) unsigned int encryptVersion;

+ (void)initialize;

@end
