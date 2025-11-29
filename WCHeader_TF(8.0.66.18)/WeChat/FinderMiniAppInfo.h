@class NSString;

@interface FinderMiniAppInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *iconUrl;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
