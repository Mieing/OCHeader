@class FinderLiveGetUserGameConfigResponse_Weapp, NSString, FinderLiveGetUserGameConfigResponse_GeneralCreateLivePrepareInfo, GameLiveJoinTeamSettingInfo, NSMutableArray;

@interface MMFinderLiveGameUserInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *downloadUrl;
@property (nonatomic) unsigned int appStatus;
@property (retain, nonatomic) NSString *defaultLiveCoverUrl;
@property (nonatomic) unsigned int minMemSize;
@property (nonatomic) unsigned int playingStatus;
@property (nonatomic) unsigned int liveStatus;
@property (nonatomic) unsigned int gameType;
@property (nonatomic) unsigned int gameShowType;
@property (nonatomic) unsigned int supportLiveType;
@property (retain, nonatomic) NSString *captureModeTips;
@property (retain, nonatomic) NSMutableArray *supportLiveTypeArray;
@property (retain, nonatomic) FinderLiveGetUserGameConfigResponse_Weapp *weApp;
@property (retain, nonatomic) FinderLiveGetUserGameConfigResponse_GeneralCreateLivePrepareInfo *prepareInfo;
@property (nonatomic) BOOL isFirstLive;
@property (nonatomic) BOOL hasStickers;
@property (retain, nonatomic) NSString *stickersUrl;
@property (retain, nonatomic) NSString *liveCoverUrl;
@property (retain, nonatomic) NSString *liveDescription;
@property (retain, nonatomic) GameLiveJoinTeamSettingInfo *joinTeamSettings;
@property (nonatomic) unsigned int lastJoinTeamUpSetting;
@property (retain, nonatomic) NSString *jumpGameParam;
@property (retain, nonatomic) NSMutableArray *bannerList;
@property (nonatomic) unsigned int durationMs;
@property (nonatomic) unsigned int redpacketChatroomSelectStatus;
@property (nonatomic) unsigned int maxVisibleUserCount;

- (id)initWithPBItem:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyFromPBItem:(id)a0;
- (id)initWithAppInfo:(id)a0;
- (void)copyFromAppInfo:(id)a0;
- (BOOL)canStartRecordLive;
- (void).cxx_destruct;

@end
