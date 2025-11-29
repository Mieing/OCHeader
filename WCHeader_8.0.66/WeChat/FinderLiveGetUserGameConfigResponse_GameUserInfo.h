@class NSString, FinderLiveGetUserGameConfigResponse_GameLiveInfo, FinderLiveGetUserGameConfigResponse_GameActivityBanner, FinderLiveGetUserGameConfigResponse_GeneralCreateLivePrepareInfo, FinderLiveGetUserGameConfigResponse_GameAppInfo, FinderLiveGetUserGameConfigResponse_UserStat;

@interface FinderLiveGetUserGameConfigResponse_GameUserInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderLiveGetUserGameConfigResponse_UserStat *userStat;
@property (retain, nonatomic) FinderLiveGetUserGameConfigResponse_GameAppInfo *appInfo;
@property (retain, nonatomic) NSString *errorMsg;
@property (retain, nonatomic) FinderLiveGetUserGameConfigResponse_GameLiveInfo *gameLiveInfo;
@property (retain, nonatomic) FinderLiveGetUserGameConfigResponse_GameActivityBanner *gameActivityBanner;
@property (retain, nonatomic) FinderLiveGetUserGameConfigResponse_GeneralCreateLivePrepareInfo *prepareInfo;

+ (void)initialize;

@end
