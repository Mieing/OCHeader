@class NSString, AWEPerfLoadRequest, AWEProfileResponseModel, NSHashTable, NSMutableArray, NSDictionary;

@interface AWEProfilePreloadUser : NSObject <AWEProfilePreloadProtocol>

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (nonatomic) BOOL isFromCache;
@property (nonatomic) unsigned long long consumeCount;
@property (nonatomic) unsigned long long maxConsumeCount;
@property (retain, nonatomic) NSMutableArray *waitCompletionBlocks;
@property (retain, nonatomic) AWEProfileResponseModel *responseModel;
@property (retain, nonatomic) AWEPerfLoadRequest *preloadLoadRequest;
@property (copy, nonatomic) NSString *cacheKey;
@property (nonatomic) long long cacheUsedCount;
@property (nonatomic) long long originSourceType;
@property (retain, nonatomic) NSHashTable *weakHashTable;
@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) NSDictionary *netStageStatisDict;
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
+ (long long)profilePreloadType;
+ (id)preloadLoadRequestKey;
+ (BOOL)isPreloadFromPreScene:(long long)a0;

- (BOOL)hasBoundDetailVC;
- (void)addCustomStageEvent;
- (void)privateLoadUserWithCompletion:(id /* block */)a0;
- (void)loadUserWithCompletion:(id /* block */)a0;
- (void)bindWeakDetailVC:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
