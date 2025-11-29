@class NSString, WxaCommUseInfo;

@interface WxaAppItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int updateTime;
@property (nonatomic) unsigned int versionType;
@property (nonatomic) long long order;
@property (nonatomic) BOOL isFromOuter;
@property (retain, nonatomic) NSString *appDesc;
@property (nonatomic) unsigned int appPattern;
@property (retain, nonatomic) WxaCommUseInfo *commuseInfo;
@property (retain, nonatomic) NSString *appPath;

+ (void)initialize;

@end
