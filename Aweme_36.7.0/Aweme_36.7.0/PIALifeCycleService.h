@class NSHashTable, NSString, NSRecursiveLock;

@interface PIALifeCycleService : NSObject <PIALifeCycleService>

@property (retain, nonatomic) NSRecursiveLock *locker;
@property (retain, nonatomic) NSHashTable *list;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executePrepareServiceTask;

- (id)initService;
- (void)onOpenScheme:(id)a0;
- (void)engine:(id)a0 onLoadStart:(id)a1;
- (void)engine:(id)a0 onURLChange:(id)a1;
- (void)onNavigationCommit:(id)a0;
- (void)engine:(id)a0 onLoadFinish:(id)a1;
- (void)onEngineDestroy:(id)a0;
- (BOOL)registerLifeCycleReceiver:(Class)a0;
- (void).cxx_destruct;

@end
