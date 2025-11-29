@class BaseRequest, NSString;

@interface PreGetDownloadUrlRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) unsigned int oldAppVersion;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned int supportedEncryptVersion;
@property (nonatomic) BOOL isSupportWithoutLib;

+ (void)initialize;

@end
