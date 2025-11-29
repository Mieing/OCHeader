@class NSString;

@interface WxaPage : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned int appVersion;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) unsigned int debugMode;
@property (retain, nonatomic) NSString *description;

+ (void)initialize;

@end
