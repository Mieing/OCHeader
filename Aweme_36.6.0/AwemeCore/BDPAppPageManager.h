@class NSObject, NSMapTable, NSMutableArray, BDPUniqueID;
@protocol OS_dispatch_semaphore;

@interface BDPAppPageManager : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSMapTable *preloadPages;
@property (retain, nonatomic) NSMapTable *viewsById;
@property (retain, nonatomic) NSMapTable *viewsByStr;
@property (retain, nonatomic) NSMutableArray *anniePages;
@property (nonatomic) long long anniePageCount;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem;
@property (nonatomic) BOOL autoCreateEnable;

- (void)setupObserver;
- (id)appPageWithID:(long long)a0;
- (id)appPageWithPath:(id)a0;
- (id)latestAppPageWithRenderType:(id)a0;
- (id)dequeueAppPageForRenderType:(id)a0;
- (void)addAppPage:(id)a0;
- (void)preparePreloadAppPageIfNeed:(id)a0;
- (void)setAutoCreateAppPageEnable:(BOOL)a0;
- (id)fpPage;
- (void)removePageIfNeed:(id)a0;
- (void)releaseTerminatedPreloadAppPage:(id)a0;
- (id)createAppPageForType:(id)a0 caller:(id)a1;
- (void)createBackupAppPageIfNeeded:(id)a0;
- (long long)preloadViewDelaySeconds;
- (BOOL)canPreloadPageForType:(id)a0;
- (id)createAppPageForType:(id)a0 caller:(id)a1 preloadId:(id)a2;
- (void)prepareAppPageIfNeed:(id)a0 forType:(id)a1;
- (void)handleReloadAppPageNotification;
- (void)handlePreloadAppPageTerminated:(id)a0;
- (id)appPagesWithIDs:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)pageCount;
- (id)initWithUniqueID:(id)a0;

@end
