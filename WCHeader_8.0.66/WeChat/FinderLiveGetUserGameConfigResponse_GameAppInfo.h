@class FinderLiveGetUserGameConfigResponse_Weapp, NSString, GameLiveJoinTeamSettingInfo, NSMutableArray;

@interface FinderLiveGetUserGameConfigResponse_GameAppInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *downloadUrl;
@property (retain, nonatomic) NSString *packageName;
@property (nonatomic) unsigned long long packageSize;
@property (retain, nonatomic) NSString *packageMd5;
@property (nonatomic) unsigned int versionCode;
@property (nonatomic) unsigned int appStatus;
@property (retain, nonatomic) NSString *defaultLiveCoverUrl;
@property (nonatomic) unsigned int minMemSize;
@property (retain, nonatomic) GameLiveJoinTeamSettingInfo *gameLiveJoinTeamSettingInfo;
@property (nonatomic) unsigned int lastJoinTeamUpSetting;
@property (nonatomic) unsigned int gameType;
@property (retain, nonatomic) FinderLiveGetUserGameConfigResponse_Weapp *weapp;
@property (nonatomic) unsigned int isFirstLive;
@property (nonatomic) BOOL hasStickers;
@property (retain, nonatomic) NSString *stickersManagementUrl;
@property (nonatomic) unsigned int gameShowType;
@property (retain, nonatomic) NSMutableArray *supportLiveType;
@property (retain, nonatomic) NSString *captureModeTips;
@property (retain, nonatomic) NSMutableArray *supportLiveTypeNew;
@property (retain, nonatomic) NSString *jumpGameParam;

+ (void)initialize;

@end
