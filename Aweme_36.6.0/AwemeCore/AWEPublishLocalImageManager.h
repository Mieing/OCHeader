@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWEPublishLocalImageManager : NSObject

@property (nonatomic) double maxCacheAge;
@property (nonatomic) unsigned long long maxCacheSize;
@property (retain, nonatomic) NSMutableDictionary *cacheMetaInfo;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedManager;

- (BOOL)removeAllCachesWithScene:(id)a0;
- (id)cachePathWithAwemeId:(id)a0 awemeModel:(id)a1 imageModel:(id)a2 uri:(id)a3 createTime:(id)a4 isVideo:(BOOL)a5 scene:(id)a6 error:(id *)a7;
- (BOOL)cacheAwemeWithId:(id)a0 resources:(id)a1;
- (void)removeExpiredCache;
- (id)cacheRootPath;
- (id)fileCachePathWithAwemeId:(id)a0 uri:(id)a1 isVideo:(BOOL)a2 isSR:(BOOL)a3;
- (id)cachePathWithAwemeId:(id)a0;
- (void)trackRemoveCache:(id)a0 removeReason:(id)a1;
- (void)storeAwemeCacheInvalidInfoWithAwemeID:(id)a0 errorCode:(long long)a1 extraErrorMsg:(id)a2;
- (BOOL)removeCacheWithAwemeId:(id)a0;
- (unsigned long long)itemSizeAtPath:(id)a0;
- (BOOL)cacheAwemeWithId:(id)a0 uri:(id)a1 filePath:(id)a2;
- (void)removeCachesExceedConstraint;
- (id)fileCachePathWithAwemeId:(id)a0 uri:(id)a1 isVideo:(BOOL)a2;
- (void)setExternalError:(id *)a0 errorCode:(long long)a1 extraErrorMsg:(id)a2;
- (BOOL)removeCacheFileWithAwemeId:(id)a0;
- (void)onAwemeDelete:(id)a0;
- (void)debug_copyFileFailed:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
