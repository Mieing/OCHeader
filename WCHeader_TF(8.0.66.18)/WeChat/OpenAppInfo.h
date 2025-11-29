@class NSString;

@interface OpenAppInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *appDescription;
@property (retain, nonatomic) NSString *appIconUrl;
@property (retain, nonatomic) NSString *appStoreUrl;
@property (nonatomic) unsigned int appVersion;
@property (retain, nonatomic) NSString *appWatermarkUrl;
@property (retain, nonatomic) NSString *androidPackageName;
@property (retain, nonatomic) NSString *androidSignature;
@property (retain, nonatomic) NSString *appName4EnUs;
@property (retain, nonatomic) NSString *appDescription4EnUs;
@property (retain, nonatomic) NSString *appName4ZhTw;
@property (retain, nonatomic) NSString *appDescription4ZhTw;
@property (nonatomic) unsigned int appInfoFlag;

+ (void)initialize;

@end
