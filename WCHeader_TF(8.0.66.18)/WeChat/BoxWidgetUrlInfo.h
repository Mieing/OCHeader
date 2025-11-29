@class NSString;

@interface BoxWidgetUrlInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (nonatomic) unsigned int versionType;
@property (nonatomic) unsigned int appVersion;
@property (retain, nonatomic) NSString *extinfo;
@property (nonatomic) unsigned int isrefresh;
@property (nonatomic) unsigned int isdevtools;
@property (nonatomic) unsigned int isusingCachedLocation;
@property (retain, nonatomic) NSString *fromUrl;
@property (nonatomic) unsigned int screenWidth;

+ (void)initialize;

@end
