@class NSString, AWEFeedLRUCache;

@interface AWEFeedVideoSafetyCheckHandler : NSObject <AWEFeedSafetyCheckProtocol>

@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) id /* block */ getCurrentModelBlock;
@property (copy, nonatomic) id /* block */ getCurrentDataSourceBlock;
@property (retain, nonatomic) AWEFeedLRUCache *lruCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestSafetyCheckWithInfo:(id)a0 referString:(id)a1 currentModel:(id /* block */)a2 currentDataSource:(id /* block */)a3 completion:(id /* block */)a4;
- (id)getRequestItemParamsForModel:(id)a0;
- (long long)getDyQTimeFromModel:(id)a0;
- (long long)getTagFromModel:(id)a0;
- (BOOL)enableStory25SafetyCheck;
- (void)optimizeRequestSafetyCheckWithInfo:(id)a0 referString:(id)a1 currentModel:(id /* block */)a2 currentDataSource:(id /* block */)a3 completion:(id /* block */)a4;
- (BOOL)enableSafeCheckCache;
- (long long)safeCheckThreshold;
- (id)getAimItemIDFromModel:(id)a0;
- (long long)cacheExpireDuration;
- (void)trackVideoSafetyCheckWithAweme:(id)a0 videoSafetyReason:(long long)a1 videoSafetyType:(long long)a2 extra:(id)a3;
- (BOOL)enablePrivacyLocalData:(id)a0;
- (void)updateCacheIfNeededWithArray:(id)a0 resultIDs:(id)a1;
- (void)handleVideoSafetyPreCheckWithResults:(id)a0 referString:(id)a1 completion:(id /* block */)a2;
- (void)updateCacheIfNeededWithArray:(id)a0 result:(id)a1;
- (BOOL)isIllegalAweme:(id)a0 resultItemIDs:(id)a1 referString:(id)a2;
- (long long)lruCacheSize;
- (void).cxx_destruct;

@end
