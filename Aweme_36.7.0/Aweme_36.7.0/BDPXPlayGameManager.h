@class NSRecursiveLock, NSMutableDictionary, NSTimer, NSString, NSMutableArray, BDPXPlayInstance;

@interface BDPXPlayGameManager : NSObject <BDPXPlayManagerDelegateProtocol>

@property (retain, nonatomic) NSMutableDictionary *singleInstanceMap;
@property (retain, nonatomic) NSMutableArray *idAppCache;
@property (retain, nonatomic) NSRecursiveLock *singleInstanceMapLock;
@property (retain, nonatomic) NSTimer *releaseTimer;
@property (readonly, nonatomic) BDPXPlayInstance *instance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldLoadXplayGame:(id)a0;
+ (BOOL)isXplayMixEngine:(id)a0 schema:(id)a1;
+ (id)sharedManager;

- (void)clearAllCache;
- (id)getXPlayInstance:(id)a0;
- (void)removeCacheWithUniqueID:(id)a0;
- (void)closeGame:(id)a0;
- (void)loadGame:(id)a0 model:(id)a1 isPreload:(BOOL)a2 isMixLaunch:(BOOL)a3 completion:(id /* block */)a4;
- (id)getSingleGameInstance:(id)a0;
- (void)addCacheWithUniqueID:(id)a0;
- (void)warmBoot:(id)a0 callback:(id /* block */)a1;
- (void)startReleaseTimer;
- (void)onChangeClarityCell:(id)a0;
- (void).cxx_destruct;

@end
