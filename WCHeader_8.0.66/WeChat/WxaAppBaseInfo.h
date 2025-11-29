@class NSString;

@interface WxaAppBaseInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int versionType;
@property (nonatomic) unsigned int appVersion;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *pagePath;
@property (nonatomic) unsigned int backGround;
@property (nonatomic) unsigned int preScene;

+ (void)initialize;

@end
