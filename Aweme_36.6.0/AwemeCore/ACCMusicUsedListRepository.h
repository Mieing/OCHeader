@class NSArray, NSMutableDictionary, NSDictionary, NSString, NSNumber;
@protocol AWEHttpTask;

@interface ACCMusicUsedListRepository : NSObject <ACCMusicListRepositoryProtocol>

@property (retain, nonatomic) NSArray *usedMusicInfos;
@property (retain, nonatomic) NSArray *musicList;
@property (retain, nonatomic) NSMutableDictionary *musicDict;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) id<AWEHttpTask> requestTask;
@property (nonatomic) unsigned long long countPerPage;
@property (retain, nonatomic) NSNumber *channelId;
@property (copy, nonatomic) NSDictionary *bizParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBindings;
- (void)toggleMusic:(id)a0 favorite:(BOOL)a1;
- (void)toggleMusicId:(id)a0 favorite:(BOOL)a1;
- (BOOL)fetchWithParams:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)recTypeOfMusic:(id)a0;
- (void)loadUsedIdsFromCache;
- (void)removeMusicWithId:(id)a0;
- (void).cxx_destruct;
- (id)cacheKey;
- (id)init;
- (void)reset;

@end
