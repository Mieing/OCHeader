@class NSRecursiveLock, NSString, NSTimer, BDPSTLQueue, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface BDPCrossTalkService : NSObject <BDPCrossTalkService>

@property (retain, nonatomic) NSHashTable *crossTalkComponents;
@property (nonatomic) long long checkStatus;
@property (retain, nonatomic) BDPSTLQueue *checkQueue;
@property (retain, nonatomic) NSTimer *delayCheckTimer;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (nonatomic) BOOL shareModeEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (BOOL)settingsEnable;
- (void)initProps;
- (void)onAppRouteChangePageDidLeaveWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (void)audioStateChange:(id)a0 action:(long long)a1 completion:(id /* block */)a2;
- (void)tmaEnterBackground:(id)a0;
- (void)tmaPagePause:(long long)a0 uniqueID:(id)a1;
- (void)switchShareMode:(BOOL)a0;
- (void)handleBGInterruption:(id)a0;
- (void)shareModeConflictOperation:(id)a0;
- (void)delayCheckCrossTalk:(id)a0 uniqueID:(id)a1 pageID:(long long)a2 reason:(id)a3;
- (void)shareModeConflictShareOperation:(id)a0;
- (void)shareModeConflictSelfOnlyOperation:(id)a0;
- (void)shareModeConflictDefaultOperation:(id)a0;
- (void)shareModeConflictDefaultBGAudioOperation:(id)a0;
- (BOOL)validShareMode:(id)a0;
- (void)crossTalkComponentDetect:(id)a0;
- (void)crossTalkBackGroundDetect:(id)a0;
- (void)crossTalkPagePauseDetect:(id)a0 pageID:(long long)a1;
- (long long)checkDelayTime;
- (id)playingComponents;
- (BOOL)dealMpIdEnable:(id)a0;
- (BOOL)sceneDealEnable:(id)a0;
- (BOOL)enableConflictOperate:(id)a0;
- (BOOL)componentUploadEnable:(id)a0;
- (id)timorViewTreeInfo:(id)a0;
- (BOOL)isAdComponent:(id)a0;
- (BOOL)isPlayingComponent:(id)a0;
- (void)initObserver;
- (void).cxx_destruct;
- (void)addComponent:(id)a0;
- (void)removeComponent:(id)a0;

@end
