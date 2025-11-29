@class NSString, AWEUserPostsDataManager, AWEPerfLoadRequest, NSDictionary, NSMutableArray, UIViewController;

@interface AWEProfilePreloadPost : NSObject <AWEProfilePreloadProtocol>

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (nonatomic) unsigned long long consumeCount;
@property (nonatomic) unsigned long long maxConsumeCount;
@property (retain, nonatomic) NSMutableArray *waitCompletionBlocks;
@property (retain, nonatomic) AWEUserPostsDataManager *postDataManager;
@property (retain, nonatomic) AWEPerfLoadRequest *preloadLoadRequest;
@property (weak, nonatomic) UIViewController *weakVC;
@property (copy, nonatomic) NSString *cacheKey;
@property (nonatomic) long long cacheUsedCount;
@property (nonatomic) long long originSourceType;
@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) NSDictionary *netStageStatisDict;
@property (nonatomic) BOOL forbidDelay;
@property (nonatomic) long long sourceType;
@property (retain, nonatomic) NSDictionary *paramDictionary;
@property (nonatomic) long long status;
@property (nonatomic) double responseTime;
@property (nonatomic) long long loadType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)preloaderWithUserID:(id)a0 secUserID:(id)a1 sourceType:(long long)a2 maxConsumeCount:(unsigned long long)a3 paramDictionary:(id)a4 completion:(id /* block */)a5;
+ (id)memoryCacheKeyWith:(id)a0 secUserID:(id)a1 paramDictionary:(id)a2;
+ (id)locateItemIdFrom:(id)a0;
+ (long long)profilePreloadType;
+ (id)preloadLoadRequestKey;

- (id)createDataManager;
- (void)loadPostWorksWithCompletion:(id /* block */)a0;
- (id)postDataManagerWith:(id)a0;
- (BOOL)canUsePreloadDataManager;
- (BOOL)canAutoLoadMoreAfterPreload;
- (void)addCustomStageEvent;
- (void).cxx_destruct;
- (void)destroy;

@end
