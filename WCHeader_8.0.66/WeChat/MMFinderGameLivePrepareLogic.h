@class WCFinderCreateCoordinator, NSString, NSArray, NSMutableDictionary, WCFinderDataItem, NSMutableArray;
@protocol MMFinderGameLivePrepareLogicDelegate;

@interface MMFinderGameLivePrepareLogic : NSObject

@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *liveObjectExportId;
@property (retain, nonatomic) NSMutableArray *gameUserInfoList;
@property (retain, nonatomic) NSArray *gameCategoryList;
@property (retain, nonatomic) NSMutableArray *gameSearchUserInfoList;
@property (retain, nonatomic) WCFinderDataItem *finderDataItem;
@property (retain, nonatomic) WCFinderCreateCoordinator *createCoordinator;
@property (retain, nonatomic) NSString *extInfoAppId;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *ticket;
@property (retain, nonatomic) NSString *extraAntiInfo;
@property (nonatomic) unsigned int opensdkVersion;
@property (nonatomic) unsigned int platformId;
@property (retain, nonatomic) NSString *gameUserId;
@property (retain, nonatomic) NSString *dataFromGame;
@property (retain, nonatomic) NSMutableDictionary *opensdkGameLiveExtInfo;
@property (weak, nonatomic) id<MMFinderGameLivePrepareLogicDelegate> delegate;

+ (BOOL)notValidForDifferentAccountWithExtInfo:(id)a0;
+ (BOOL)isValidToJumpWithExtInfo:(id)a0;
+ (BOOL)isValidToJumpFromOpenBusinessViewWithExtInfo:(id)a0;

- (id)init;
- (id)initWithAppId:(id)a0 opensdkVersion:(unsigned int)a1 extInfoDic:(id)a2 needFetchData:(BOOL)a3;
- (void)initPropertyWithExtInfoDic:(id)a0;
- (void)fetchDataWithAppId:(id)a0;
- (void)jumpLiveForDifferentAccount;
- (void)jumpToGameLiveFromOpenSDKWithAppId:(id)a0 rootVC:(id)a1 extInfos:(id)a2;
- (void)onJumpToGameLiveStarterPrepareWithAppId:(id)a0 rootViewController:(id)a1;
- (void)startFinderLiveWithAppid:(id)a0 rootVC:(id)a1;
- (void)internalStartLiveWithVC:(id)a0 appId:(id)a1;
- (void)jumpToLiveEnterWithExportId:(id)a0 extParam:(id)a1;
- (void)jumpToLiveEnterWithExportId:(id)a0 extParam:(id)a1 failure:(id /* block */)a2;
- (void)jumpToLiveShareWithExportId:(id)a0;
- (void)jumpToLiveFansWithExportId:(id)a0;
- (void)jumpToMusicSettingWithExportId:(id)a0 failure:(id /* block */)a1;
- (void)jumpToPromoteWithExportId:(id)a0 failure:(id /* block */)a1;
- (void)jumpToShopShelfWithExportId:(id)a0 failure:(id /* block */)a1;
- (void)jumpToGame3DSettingWithExportId:(id)a0 failure:(id /* block */)a1;
- (void)jumpToPlayTogetherPanelWithExportId:(id)a0 failure:(id /* block */)a1;
- (void)jumpToPlayTogetherLiteAppPanelWithExportId:(id)a0 failure:(id /* block */)a1;
- (void)getGameUserInfoList;
- (void)getFilteredGameUserInfoWithAppId:(id)a0;
- (void)getStickerStatusWithAppid:(id)a0;
- (BOOL)isGameSearchUserInfoListContain:(id)a0;
- (BOOL)haveFinderContact;
- (void).cxx_destruct;

@end
