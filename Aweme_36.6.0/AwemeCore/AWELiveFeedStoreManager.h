@class NSMutableDictionary, NSMutableArray;

@interface AWELiveFeedStoreManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *dataMap;
@property (retain, nonatomic) NSMutableArray *feedPreStreamItem;

+ (id)sharedManager;

- (void)p_addNotification;
- (void)storeRefreshListWithData:(id)a0 referString:(id)a1;
- (void)storeLoadMoreListWithData:(id)a0 referString:(id)a1;
- (void)_storeFeedListWithData:(id)a0 isFetch:(BOOL)a1 referString:(id)a2;
- (void)storeFeedPreStreamItem:(id)a0 isFetch:(BOOL)a1 referString:(id)a2;
- (BOOL)adapter_enableUseUpdateLive;
- (id)centerWith:(id)a0;
- (id)getNowTimestamp;
- (id)_buildCurrenScene:(id)a0 referString:(id)a1;
- (void)_createVideoFeedModelUseRoomID:(id)a0 userID:(id)a1 sceneID:(id)a2 toCenter:(id)a3 timestamp:(id)a4 status:(long long)a5 adSourceType:(long long)a6 isLiveWhiteAd:(BOOL)a7 needDowngrade:(BOOL)a8 logID:(id)a9 itemID:(id)a10;
- (id)_buildSceneUIDKey:(id)a0 userID:(id)a1;
- (void)readPreStream:(id)a0 referString:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)applicationWillTerminate;

@end
