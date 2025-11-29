@class NSRecursiveLock, NSMutableDictionary, NSTimer, NSString, NSMutableArray;

@interface AWEAwemeOfflineCommentManager : NSObject <AWEOfflineCommentCacheProtocol>

@property (retain, nonatomic) NSRecursiveLock *commentLock;
@property (retain, nonatomic) NSMutableDictionary *downloadedDict;
@property (retain, nonatomic) NSMutableArray *commentNoCachedArr;
@property (retain, nonatomic) NSTimer *offLineCommentCheckTimer;
@property (nonatomic) long long commentAccumulateCacheCount;
@property (nonatomic) long long commentAccumulateCount;
@property (nonatomic) BOOL commentReadCompleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getCommentModelWithModelItemID:(id)a0;
- (BOOL)enableOfflineCommentCache;
- (void)getCommentCachedDictFromFileWithCompletion:(id /* block */)a0;
- (void)checkAndUpdateComment;
- (void)commentImageRequestWith:(id)a0;
- (void)saveCommentData;
- (void)verifyCommentsID:(id)a0;
- (void)storageToFlieWithCommentList:(id)a0 key:(id)a1 completion:(id /* block */)a2;
- (void)preloadCommentWithItemID:(id)a0;
- (void)removeCommentWithItemID:(id)a0 onlyComment:(BOOL)a1;
- (void)invalidateCommentCheckTimer;
- (void)cleanAllCommentCache;
- (void)continueDownloadNoCachedComments;
- (long long)downloadedCommentCount;
- (void).cxx_destruct;
- (id)init;
- (void)applicationWillTerminate;
- (void)dealloc;
- (void)appDidEnterBackground;

@end
