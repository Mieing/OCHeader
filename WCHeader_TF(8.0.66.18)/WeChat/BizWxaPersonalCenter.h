@class NSString, NSData;

@interface BizWxaPersonalCenter : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *sceneNote;
@property (retain, nonatomic) NSData *extraData;
@property (nonatomic) unsigned int appVersion;
@property (nonatomic) unsigned int isFeatureOpen;

+ (void)initialize;

- (void)setIsFeatureOpen:(unsigned int)a0;
- (unsigned int)isFeatureOpen;
- (void)setAppVersion:(unsigned int)a0;
- (unsigned int)appVersion;
- (void)setExtraData:(id)a0;
- (id)extraData;
- (void)setSceneNote:(id)a0;
- (id)sceneNote;
- (void)setScene:(unsigned int)a0;
- (unsigned int)scene;
- (void)setPath:(id)a0;
- (id)path;
- (void)setUsername:(id)a0;
- (id)username;
- (void)setAppid:(id)a0;
- (id)appid;

@end
