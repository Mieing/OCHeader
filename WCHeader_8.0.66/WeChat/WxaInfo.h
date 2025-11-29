@class NSString;

@interface WxaInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned int envVersion;

+ (void)initialize;

@end
