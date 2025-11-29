@class AWELivePreStreamContext, NSArray, AWEAwemeModel, NSMutableArray, PTYMemoryCache;

@interface AWELiveStreamSearchManager : NSObject

@property (retain, nonatomic) NSArray *supportAdEntrances;
@property (nonatomic) BOOL enableAdSearch;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) PTYMemoryCache *memoryCache;
@property (retain, nonatomic) NSArray *supportEntrances;
@property (nonatomic) BOOL enableSearch;
@property (retain, nonatomic) NSMutableArray *cacheSearchWords;
@property (retain, nonatomic) NSMutableArray *adCacheSearchWords;
@property (retain, nonatomic) AWELivePreStreamContext *currentContext;
@property (nonatomic) BOOL pitayaObservered;

+ (id)sharedManager;

- (void)removePitayaObserver;
- (id)getCacheSearchWords;
- (void)updatePitayaCachedAdRoomIDs;
- (id)buildCommonParams:(id)a0 refer:(id)a1;
- (id)buildCommonParamsWithResult:(id)a0 wordIndex:(long long)a1 needExtraParams:(BOOL)a2;
- (void)removePitayaCachedAdRoomIDWith:(id)a0;
- (void)trackWordClick:(id)a0 refer:(id)a1 wordIndex:(long long)a2;
- (void)trackWordShow:(id)a0 refer:(id)a1 wordIndex:(long long)a2;
- (void)trackWordsArrayShow:(id)a0 refer:(id)a1;
- (BOOL)supportLiveWatchedSearchWord:(id)a0;
- (void)addPitayaObserverWithContext:(id)a0 model:(id)a1 completion:(id /* block */)a2;
- (id)searchLocalWordModelWithRoomID:(id)a0 enterFrom:(id)a1;
- (void)dealPitayaCallback:(id)a0 completion:(id /* block */)a1;
- (void)requestAdSearchKeyWord:(id)a0 completion:(id /* block */)a1;
- (void)requestSearchKeyWord:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
