@class NSString;

@interface WxaAppConfig : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int configVersion;
@property (retain, nonatomic) NSString *config;

+ (void)initialize;

@end
