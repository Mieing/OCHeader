@class NSMutableDictionary, NSMutableSet;

@interface LiteTaskManager : NSObject

@property (retain) NSMutableDictionary *liteTaskDic;
@property (retain) NSMutableDictionary *completedCacheDic;
@property (retain) NSMutableSet *fallbackSet;

+ (id)shareInstance;

- (void)deleteCache:(id)a0;
- (id)createTracker:(id)a0;
- (id)getProgressInfo:(id)a0 totalLen:(long long)a1;
- (id)getCompletedFullPath:(id)a0;
- (void)reportResultAsync:(long long)a0 key:(id)a1 path:(id)a2 progressCallback:(id /* block */)a3 resultCallback:(id /* block */)a4;
- (void)deleteFromCompletedCache:(id)a0;
- (long long)getLittleFileThreshold:(id)a0 url:(id)a1;
- (BOOL)isExistInFallbackSet:(id)a0;
- (BOOL)checkCache:(id)a0 progress:(id /* block */)a1 status:(id /* block */)a2;
- (void)deleteFromLiteTaskDic:(id)a0;
- (void)addToFallbackSet:(id)a0;
- (void)addToCompletedCache:(id)a0 path:(id)a1;
- (id)createDownloadInfo:(id)a0 status:(long long)a1 fullPath:(id)a2 downloadedLen:(long long)a3 totalLen:(long long)a4;
- (id)getAndDeleteFromCompletedCache:(id)a0;
- (id)getFromLiteTaskDic:(id)a0;
- (BOOL)tryStartLiteTask:(id)a0 fileName:(id)a1 md5Value:(id)a2 urlLists:(id)a3 progress:(id /* block */)a4 status:(id /* block */)a5 userParameters:(id)a6 fallbackWork:(id /* block */)a7;
- (BOOL)query:(id)a0 queryCallback:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)cancel:(id)a0;

@end
