@class SECTessaMemRepo, SECTessaCommitRepo, NSString, SECTessaDiskKVRepo, NSLock, SECTessaCleaner, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SECTessaRepo : NSObject <SECTessaProviderDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSLock *_subscriberLock;
}

@property (retain, nonatomic) SECTessaMemRepo *memRepo;
@property (retain, nonatomic) SECTessaDiskKVRepo *diskRepo;
@property (retain, nonatomic) SECTessaCommitRepo *commitRepo;
@property (retain, nonatomic) SECTessaCleaner *cleaner;
@property (nonatomic) double writeToDiskInterval;
@property BOOL writeToDiskScheduled;
@property (copy, nonatomic) NSString *repoName;
@property unsigned long long memRepoStatus;
@property unsigned long long diskRepoStatus;
@property double activeDiskDelay;
@property BOOL consumeTaskScheduled;
@property (nonatomic) double consumeTaskInterval;
@property (retain, nonatomic) NSMutableArray *subscribers;
@property (retain, nonatomic) NSMutableArray *stashedTessaIds;
@property (retain, nonatomic) NSMutableArray *commits;
@property (retain, nonatomic) NSMutableArray *aheadTessaIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)currentRepositorySize;
- (void)deleteWithIds:(id)a0 completion:(id /* block */)a1;
- (void)cleanupDisk;
- (void)scheduleActiveDiskTask;
- (void)_updateTessa:(id)a0 withSample:(id)a1 withCommitHandler:(id /* block */)a2;
- (void)scheduleWriteDiskTask;
- (void)scheduleConsumeTask;
- (void)delayWriteDisk;
- (unsigned long long)diskDelayTime;
- (void)activeDiskRepo;
- (void)upgradeDiskRepoIfNeeded;
- (void)_syncRepo;
- (void)syncMemRepoWithDiskRepo:(id)a0;
- (void)delayConsumeTask;
- (id)initWithConfig:(id)a0 repoName:(id)a1;
- (void)addSubscriberForTessaChange:(id)a0;
- (void)tryUpdateTessa:(id)a0 withSample:(id)a1 withResultHandler:(id /* block */)a2;
- (void)writeToDisk;
- (void).cxx_destruct;
- (void)cleanup;
- (void)consume;
- (id)allIdentifiers;

@end
