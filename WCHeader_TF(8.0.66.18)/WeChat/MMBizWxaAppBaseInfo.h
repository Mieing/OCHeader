@class NSString;

@interface MMBizWxaAppBaseInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int versionType;
@property (nonatomic) unsigned int appVersion;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int preScene;
@property (nonatomic) unsigned int backGround;
@property (retain, nonatomic) NSString *pagePath;
@property (nonatomic) unsigned int pubVersion;

+ (void)initialize;

@end
