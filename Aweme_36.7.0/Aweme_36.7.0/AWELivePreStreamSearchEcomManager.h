@class AWELivePreStreamContext, NSArray, AWEAwemeModel, NSMutableArray, PTYMemoryCache;

@interface AWELivePreStreamSearchEcomManager : NSObject

@property (retain, nonatomic) NSArray *supportAdEntrances;
@property (nonatomic) BOOL enableAdSearch;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) PTYMemoryCache *memoryCache;
@property (retain, nonatomic) NSMutableArray *shownLiveRoomIds;
@property (retain, nonatomic) NSMutableArray *toBeShownRoomIds;
@property (nonatomic) BOOL pitayaObservered;
@property (retain, nonatomic) NSMutableArray *cacheSearchWords;
@property (retain, nonatomic) NSMutableArray *adCacheSearchWords;
@property (retain, nonatomic) AWELivePreStreamContext *context;

+ (id)sharedManager;

- (void)dealPitayaCallback:(id)a0;
- (void)trackPitayaQueryRequest:(id)a0;
- (void)requestSearchEcom:(id)a0;
- (BOOL)enableOptCache;
- (id)searchLocalWordModelWithRoomID:(id)a0 requestID:(id)a1;
- (void)removePitayaObserver;
- (id)searchLocalWordModelWithRoomID:(id)a0;
- (BOOL)isAdEcomLiveRoomWith:(id)a0;
- (id)getCacheSearchWords;
- (void)updatePitayaCachedAdRoomIDs;
- (id)buildCommonParams:(id)a0 refer:(id)a1;
- (id)buildCommonParamsWithResult:(id)a0 wordIndex:(long long)a1 needExtraParams:(BOOL)a2;
- (void)trackWordShow:(id)a0 refer:(id)a1 wordIndex:(long long)a2 wordSource:(id)a3;
- (id)buildCommonParams:(id)a0 refer:(id)a1 wordSource:(id)a2;
- (BOOL)supportPitayaSearchEcomWord:(id)a0;
- (long long)ecomSearchStyle;
- (void)addPitayaObserverWith:(id)a0;
- (void)removePitayaCachedAdRoomIDWith:(id)a0;
- (void)recordLiveShown:(id)a0;
- (void)updateToBeShownRoomIds:(id)a0;
- (void)trackWordClick:(id)a0 refer:(id)a1 wordIndex:(long long)a2;
- (void)trackWordShow:(id)a0 refer:(id)a1 wordIndex:(long long)a2;
- (void)trackWordInfo:(id)a0 refer:(id)a1 wordIndex:(long long)a2;
- (void)trackWordsArrayShow:(id)a0 refer:(id)a1;
- (void)trackElementCloseClicked:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
