@class NSMutableDictionary;

@interface BDPathManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex_lock;
    NSMutableDictionary *_rootComponents;
}

+ (long long)totalFilesSize;
+ (long long)deletableFilesSize;
+ (void)cleanupDeletableFiles;
+ (long long)triggerCleanEventForOpportunity:(unsigned long long)a0 needSize:(BOOL)a1;
+ (id)rootComponentWithName:(id)a0;
+ (BOOL)registerModuleRootComponent:(id)a0;
+ (void)totalFilesSizeWithCompletion:(id /* block */)a0;
+ (void)deletableFilesSizeWithCompletion:(id /* block */)a0;
+ (void)cleanupDeletableFilesWithCompletion:(id /* block */)a0;
+ (void)triggerCleanEventForOpportunity:(unsigned long long)a0 needSize:(BOOL)a1 completion:(id /* block */)a2;
+ (id)sharedInstance;

- (void)_cleanupDeletableFiles;
- (void)applicationDidEnterBackgroundNoti:(id)a0;
- (void)applicationDidBecomeActiveNoti:(id)a0;
- (void)applicationWillTerminateNoti:(id)a0;
- (void)_asyncTriggerCleanEventForOpportunity:(unsigned long long)a0 needSize:(BOOL)a1 completion:(id /* block */)a2;
- (id)_rootComponentWithName:(id)a0;
- (BOOL)_registerModuleRootComponent:(id)a0;
- (long long)_totalFilesSize;
- (long long)_deletableFilesSize;
- (long long)_triggerCleanEventForOpportunity:(unsigned long long)a0 needSize:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
