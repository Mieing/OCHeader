@interface AWEPublishLocalCacheHelper : NSObject

+ (double)firstInstallTime;
+ (id)errorReason:(long long)a0;
+ (void)storeAwemeCacheInvalidInfos:(id)a0;
+ (void)trackStoreAwemeCacheInvalidInfos:(id)a0;
+ (long long)cacheInvalidReasonMaxCount;
+ (id)appendTrackSamplingSuffixWithKey:(id)a0;
+ (void)trackGetCache:(id)a0 awemeModel:(id)a1 imageItem:(id)a2 from:(id)a3 fromScene:(id)a4 uri:(id)a5 isVideo:(BOOL)a6 hit:(BOOL)a7 errorCode:(long long)a8 extraErrorMsg:(id)a9 extra:(id)a10;
+ (void)setupFirstInstallTimeIfNeeded;
+ (id)errorWithCode:(long long)a0 extraErrorMsg:(id)a1;
+ (void)storeAwemeCacheInvalidInfo:(id)a0;
+ (id)restoreAwemeCacheInvalidInfoWithAwemeID:(id)a0;
+ (void)trackStoreLocalCacheSucceed:(id)a0;
+ (void)trackGetCache:(id)a0 awemeModel:(id)a1 imageItem:(id)a2 from:(id)a3 fromScene:(id)a4 uri:(id)a5 isVideo:(BOOL)a6 hit:(BOOL)a7 errorCode:(long long)a8 extraErrorMsg:(id)a9;
+ (void)trackRemoveCache:(id)a0 from:(id)a1 removeReason:(id)a2 removeCacheAge:(double)a3 removeCacheSize:(double)a4 totalSize:(double)a5;

@end
