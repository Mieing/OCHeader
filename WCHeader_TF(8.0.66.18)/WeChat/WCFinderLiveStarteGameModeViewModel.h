@class NSData, NSString, MMFinderLiveGameUserInfo, NSArray, MMFinderLiveTask, MMFinderLivePromoteManageLogic, NSMutableDictionary, NSMutableArray, MMFinderLiveImageOcrOp, FinderLocation, WCFinderLiveStarteGameModeCacheModel;
@protocol WCFinderStarterLiveGameViewModelDelegate;

@interface WCFinderLiveStarteGameModeViewModel : WCFinderStarterLiveBaseViewModel <ILocationMgrExt, WCFinderLiveExt>

@property (retain, nonatomic) FinderLocation *locationInfo;
@property (retain, nonatomic) NSString *liveGameAuthTicket;
@property (retain, nonatomic) NSString *liveCoverUrl;
@property (retain, nonatomic) NSString *defaultLiveCoverUrl;
@property (nonatomic) BOOL useLocalCover;
@property (retain, nonatomic) NSString *liveDescription;
@property (retain, nonatomic) NSString *liveDescriptionExtend;
@property (retain, nonatomic) NSString *finderUsername;
@property (readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property (retain, nonatomic) MMFinderLiveImageOcrOp *ocrOp;
@property (retain, nonatomic) NSData *spamCheckInfo;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *liveObjectExportId;
@property (retain, nonatomic) NSString *extInfoAppId;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *ticket;
@property (retain, nonatomic) NSString *extraAntiInfo;
@property (nonatomic) unsigned int opensdkVersion;
@property (nonatomic) unsigned int platformId;
@property (retain, nonatomic) NSString *gameUserId;
@property (retain, nonatomic) MMFinderLiveGameUserInfo *gameUserInfo;
@property (weak, nonatomic) id<WCFinderStarterLiveGameViewModelDelegate> gameDelegate;
@property (retain, nonatomic) NSMutableArray *gameUserInfoList;
@property (retain, nonatomic) NSArray *gameCategoryList;
@property (nonatomic) long long entryScene;
@property (nonatomic) int createGameLiveScene;
@property (nonatomic) int wxaGameLiveScene;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) WCFinderLiveStarteGameModeCacheModel *gameModeCacheModel;
@property (nonatomic) unsigned int currJoinTeamCoinValue;
@property (retain, nonatomic) MMFinderLivePromoteManageLogic *promoteManageLogic;
@property (retain, nonatomic) NSMutableDictionary *opensdkGameLiveExtInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getGameUserInfoList;
- (void)getGameUserInfoWithAppId:(id)a0 opensdkVersion:(unsigned int)a1 extInfoDic:(id)a2 needFetchData:(BOOL)a3;
- (void)initPropertyWithExtInfoDic:(id)a0;
- (void)updateLiveGameUserInfo:(id)a0;
- (void)fetchDataWithAppId:(id)a0;
- (BOOL)isGameLiveCreated;
- (void)getFilteredGameUserInfoWithAppId:(id)a0;
- (void)getStickerStatusWithAppid:(id)a0;
- (BOOL)haveFinderContact;
- (void)updateWithLiveTaskId:(id)a0 appId:(id)a1 andGameLiveEntryScene:(long long)a2;
- (void)fetchLocation;
- (void)updateLiveCoverUrl:(id)a0 useLocalCover:(BOOL)a1;
- (id)getLiveCoverUrl;
- (BOOL)updateGameLiveDataItem;
- (void)updateGameLiveCoverMediaUrlWithFinderMedia:(id)a0;
- (void)updateLiveDescription:(id)a0 liveDescriptionExtend:(id)a1;
- (void)updateLiveGameAuthTicket:(id)a0;
- (void)updateLocationInfoWithCachedLocation:(id)a0;
- (void)createGameLivePrepareWithGeneralParamsModel:(id)a0 gameLiveParams:(id)a1 lotteryPanel:(id)a2 Success:(id /* block */)a3 failure:(id /* block */)a4;
- (void)createMiniGameLiveWithAckSpamMsg:(BOOL)a0 successBlock:(id /* block */)a1;
- (void)asyncGetCreateLiveImageOcrSpamInfo:(id)a0 appId:(id)a1 coverImgUrl:(id)a2 coverImgPath:(id)a3 headImg:(id)a4 headImgPath:(id)a5 headUrl:(id)a6 completion:(id /* block */)a7;
- (void)assembleSpamCheckInfoWithCoverPicFeature:(id)a0 headImgPicFeat:(id)a1;
- (void)innerGetGameUserInfoList;
- (void)createRecordGameLiveWithSuccessBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
