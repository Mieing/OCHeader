@class NSLock, AWEFavoriteFileDataController, NSString;

@interface AWECollectionListCacheManager : NSObject <AWEUserMessage>

@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) AWEFavoriteFileDataController *dataController;
@property (nonatomic) BOOL isAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)p_ForceUpdateCache;
- (void)updateCollectionListWithCompletion:(id /* block */)a0;
- (id)getCollectionListDataControllerWithUpdate:(BOOL)a0;
- (void)remakeCacheByList:(id)a0 hasMore:(BOOL)a1 cursor:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)updateCache:(id)a0;

@end
