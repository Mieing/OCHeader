@protocol IESLiveRoomService, IESLivePropsAPI;

@interface HTSLiveGivingServiceWrapper : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<IESLivePropsAPI> assetsApi;
@property (nonatomic) BOOL updating;
@property (copy, nonatomic) id /* block */ requestAssetListTaskBlock;
@property (nonatomic) BOOL hasPreloadGiftListWithIntelligence;

- (void)fetchAssetListToUser:(id)a0;
- (void)updateGiftListForOtherRoom:(id)a0 forOtherUser:(id)a1 recipientChanged:(BOOL)a2 fetchGiftListScene:(unsigned long long)a3 fetchEffectMomentType:(long long)a4 fetchGiftListMomentType:(long long)a5 downloadEffects:(BOOL)a6 selectedGiftID:(id)a7 params:(id)a8 completion:(id /* block */)a9;
- (void)updateResourceList:(long long)a0 scene:(unsigned long long)a1 toUser:(id)a2 fetchGiftListMomentType:(long long)a3 downloadEffects:(BOOL)a4 selectedGiftID:(id)a5 params:(id)a6 giftListApiCompletion:(id /* block */)a7;
- (void)updateGiftListIncrementallyWithFetchGiftListScene:(unsigned long long)a0 fetchEffectMomentType:(long long)a1 downloadEffects:(BOOL)a2 requestGiftIDs:(id)a3 pageType:(id)a4 params:(id)a5 completion:(id /* block */)a6;
- (void)updateGiftListIncrementallyForOtherRoom:(id)a0 forOtherUser:(id)a1 fetchGiftListScene:(unsigned long long)a2 fetchEffectMomentType:(long long)a3 downloadEffects:(BOOL)a4 requestGiftIDs:(id)a5 pageType:(id)a6 params:(id)a7 completion:(id /* block */)a8;
- (void)searchGiftWith:(id)a0 fetchGiftListScene:(unsigned long long)a1 toUser:(id)a2 completion:(id /* block */)a3;
- (id)initWithRoom:(id)a0 trackContext:(id)a1;
- (BOOL)isAdLiveRoom:(id)a0;
- (void)downloadEffects:(id)a0 type:(long long)a1;
- (void)p_downloadEffects:(id)a0 type:(long long)a1;
- (void)scheduleResourceAutoUpdate;
- (void).cxx_destruct;

@end
