@class NSRecursiveLock, NSString, NSMutableDictionary, NSMutableArray;

@interface BDPFavoritesManager : NSObject <BDPBootLifeCycleMessage, BDPUserLoginMessage, BDPBubbleTipDelegate, BDPContainerLifeCycleMessage, BDPWarmBootMessage> {
    BOOL _succeedRequestList;
    BOOL _requestingFavoritesList;
    NSString *_currentSession;
    NSRecursiveLock *_listLock;
    NSMutableArray *_favoritesList;
    NSMutableDictionary *_tipViewData;
}

@property (retain, nonatomic) NSString *guideTipCountKey;
@property (retain, nonatomic) NSMutableDictionary *guideBubbleDic;
@property (retain, nonatomic) NSMutableDictionary *isCPBubbleDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)errorWithErrorCode:(long long)a0 errorMsg:(id)a1;
+ (id)createBubbleTipWithDelegate:(id)a0 tipModel:(id)a1;
+ (id)tipTypeTrackStringForType:(long long)a0;
+ (long long)getGuideTipMaxTime;
+ (id)getGuideTipWhiteList;
+ (BOOL)shouldShowFavoritesForType:(long long)a0;
+ (BOOL)isHostSupportFavorites;
+ (id)tipStringForTipType:(long long)a0 type:(long long)a1;
+ (BOOL)shouldShowTipViewForScene:(id)a0;
+ (void)showToastWithTipType:(long long)a0 type:(long long)a1;
+ (id)normalizeCPTipString:(id)a0;
+ (void)guideShowTrackInfoWithUniqueId:(id)a0 type:(long long)a1 tipString:(id)a2;
+ (void)guideCloseTrackInfoWithUniqueId:(id)a0 type:(long long)a1 tipString:(id)a2 closeBy:(id)a3 duration:(double)a4;
+ (void)guideClickTrackInfoWithUniqueId:(id)a0 duration:(double)a1;
+ (void)guideClickResultTrackInfoWithUniqueId:(id)a0 isSuccess:(BOOL)a1;
+ (id)sharedManager;

- (void)registerMessage;
- (void)applicationExitWithUniqueID:(id)a0;
- (void)viewDidAppear:(id)a0 uniqueID:(id)a1;
- (void)addToFavoritesListWithAppID:(id)a0 extraParams:(id)a1 completionBlock:(id /* block */)a2;
- (void)removeFromFavoritesListWithAppID:(id)a0 extraParams:(id)a1 completionBlock:(id /* block */)a2;
- (void)applicationFirstFrameDidShow:(id)a0;
- (void)applicationTaskAndCommonReadyWithUniqueID:(id)a0 bootManager:(id)a1 isColdBoot:(BOOL)a2;
- (BOOL)isAppIdIncludeInList:(id)a0;
- (void)loginWithAppId:(id)a0 containerVC:(id)a1 completionBlock:(id /* block */)a2;
- (BOOL)getIsCPBubbleWithUniqueID:(id)a0;
- (id)getGuideCountKey;
- (void)userLoginWithUniqueID:(id)a0;
- (void)asyncRefreshFavoritesListWithUniqueID:(id)a0;
- (void)updateFavoritesListByForceWithUniqueID:(id)a0;
- (BOOL)getIsLoginWithAppID:(id)a0;
- (void)checkAndShowGuideBubbleWithUniqueID:(id)a0;
- (void)checkAndShowGuideBubbleWithUniqueID:(id)a0 inContainerVC:(id)a1;
- (BOOL)checkLayoutBubbleTipViewWithUniqueID:(id)a0;
- (void)updateFavoritesListIfNeedWithUniqueID:(id)a0;
- (void)refreshFavoritesListWithUniqueID:(id)a0;
- (void)getFavoritesListWithExtraParams:(id)a0 appID:(id)a1 completionBlock:(id /* block */)a2;
- (void)sortFavoritesListWithAppID:(id)a0 pivotAppID:(id)a1 isBefore:(BOOL)a2 extraParams:(id)a3 completionBlock:(id /* block */)a4;
- (void)basicAddToFavoritesListWithAppID:(id)a0 extraParams:(id)a1 completionBlock:(id /* block */)a2;
- (void)basicRemoveFromFavoritesListWithAppID:(id)a0 extraParams:(id)a1 completionBlock:(id /* block */)a2;
- (void)basicSortFavoritesListWithAppID:(id)a0 pivotAppID:(id)a1 isBefore:(BOOL)a2 extraParams:(id)a3 completionBlock:(id /* block */)a4;
- (id)getHostId;
- (void)setIsCPBubbleWithUniqueID:(id)a0 isShow:(BOOL)a1;
- (void)hideBubbleTip:(id)a0;
- (BOOL)checkTipViewCountForAppID:(id)a0 viewType:(long long)a1;
- (BOOL)checkTipViewIntervalForAppID:(id)a0 viewType:(long long)a1;
- (void)updateTipViewDataForAppID:(id)a0 viewType:(long long)a1;
- (BOOL)notifyHostAppRemoveFromFavoritesForType:(long long)a0 uniqueId:(id)a1 extraInfo:(id)a2;
- (BOOL)notifyHostAppAddToFavoritesForType:(long long)a0 uniqueId:(id)a1 extraInfo:(id)a2;
- (void)bdp_getFavoritesListWithExtraParams:(id)a0 appID:(id)a1 completionBlock:(id /* block */)a2;
- (void)bdp_addToFavoritesListWithAppID:(id)a0 extraParams:(id)a1 completionBlock:(id /* block */)a2;
- (void)bdp_removeFromFavoritesListWithAppID:(id)a0 extraParams:(id)a1 completionBlock:(id /* block */)a2;
- (void)bdp_sortFavoritesListWithAppID:(id)a0 pivotAppID:(id)a1 isBefore:(BOOL)a2 extraParams:(id)a3 completionBlock:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;

@end
