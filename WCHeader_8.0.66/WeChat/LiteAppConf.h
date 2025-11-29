@class NSString;

@interface LiteAppConf : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned int expireDuration;
@property (nonatomic) unsigned int refreshDuration;
@property (retain, nonatomic) NSString *wepkgId;

+ (void)initialize;

@end
