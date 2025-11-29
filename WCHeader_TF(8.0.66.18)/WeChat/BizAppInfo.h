@class NSString;

@interface BizAppInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) NSString *name4EnUs;
@property (retain, nonatomic) NSString *description4EnUs;
@property (retain, nonatomic) NSString *name4ZhTw;
@property (retain, nonatomic) NSString *description4ZhTw;
@property (retain, nonatomic) NSString *iconUrlSd;
@property (retain, nonatomic) NSString *iconUrlHd;
@property (retain, nonatomic) NSString *storeUrl;
@property (retain, nonatomic) NSString *watermarkUrl;
@property (retain, nonatomic) NSString *androidPackageName;
@property (retain, nonatomic) NSString *androidSignature;
@property (retain, nonatomic) NSString *appType;
@property (retain, nonatomic) NSString *devInfo;
@property (nonatomic) unsigned int appInfoFlag;
@property (nonatomic) unsigned int appVersion;
@property (nonatomic) unsigned int appUpdateVersion;
@property (retain, nonatomic) NSString *iconUrlMdpi;
@property (retain, nonatomic) NSString *downloadUrl;
@property (retain, nonatomic) NSString *downloadUrlMd5;
@property (retain, nonatomic) NSString *googlePlayDownloadUrl;
@property (nonatomic) unsigned long long appSupportContentType;

+ (void)initialize;

@end
