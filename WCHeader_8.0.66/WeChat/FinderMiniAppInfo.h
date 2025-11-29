@class NSString;

@interface FinderMiniAppInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *iconUrl;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

- (void)setScene:(unsigned int)a0;
- (unsigned int)scene;
- (void)setIconUrl:(id)a0;
- (id)iconUrl;
- (void)setNickName:(id)a0;
- (id)nickName;
- (void)setPath:(id)a0;
- (id)path;
- (void)setAppId:(id)a0;
- (id)appId;

@end
