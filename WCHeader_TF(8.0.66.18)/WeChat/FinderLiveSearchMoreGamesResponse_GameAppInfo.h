@class NSString, FinderLiveSearchMoreGamesResponse_Weapp;

@interface FinderLiveSearchMoreGamesResponse_GameAppInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *appname;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *downloadUrl;
@property (retain, nonatomic) NSString *packageName;
@property (nonatomic) unsigned long long packageSize;
@property (retain, nonatomic) NSString *packageMd5;
@property (nonatomic) unsigned int versionCode;
@property (nonatomic) unsigned int appStatus;
@property (retain, nonatomic) NSString *defaultLiveCoverUrl;
@property (nonatomic) unsigned int gameType;
@property (retain, nonatomic) FinderLiveSearchMoreGamesResponse_Weapp *weapp;
@property (retain, nonatomic) NSString *shortAppname;

+ (void)initialize;

@end
