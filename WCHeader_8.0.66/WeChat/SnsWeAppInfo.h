@class NSString;

@interface SnsWeAppInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *mapPoiId;
@property (nonatomic) unsigned int appId;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *redirectUrl;
@property (nonatomic) unsigned int showType;
@property (nonatomic) unsigned int score;

+ (void)initialize;

- (void)setScore:(unsigned int)a0;
- (unsigned int)score;
- (void)setShowType:(unsigned int)a0;
- (unsigned int)showType;
- (void)setRedirectUrl:(id)a0;
- (id)redirectUrl;
- (void)setUserName:(id)a0;
- (id)userName;
- (void)setAppId:(unsigned int)a0;
- (unsigned int)appId;
- (void)setMapPoiId:(id)a0;
- (id)mapPoiId;

@end
