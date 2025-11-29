@class HMDMemoryMonitorRecord, NSPointerArray, NSMutableSet;

@interface AWEAwemePlayVideoManager : NSObject <AWEVideoPrefetchHitDelegate>

@property (retain, nonatomic) HMDMemoryMonitorRecord *memoryRecord;
@property (retain, nonatomic) NSPointerArray *weakPlayersDidAppear;
@property (retain, nonatomic) NSMutableSet *playedItemIdSet;

+ (id)sharedInstance;
+ (void)setup;

- (void)userDidTakeScreenshot:(id)a0;
- (void)addMemoryMonitor;
- (void)trackScreenShootWithPause:(BOOL)a0 isPlayer:(BOOL)a1;
- (void)trackScreenShootWithPause:(BOOL)a0 isPlayer:(BOOL)a1 awemeModel:(id)a2 withLogExtra:(id)a3;
- (void)videoPrefetch:(id)a0 didHitWithSize:(unsigned long long)a1;
- (void)videoPrefetch:(id)a0 didMissWithSize:(unsigned long long)a1;
- (id)getMemoryMonitorRecord;
- (void)updatePlayersWhenDidAppear:(BOOL)a0 player:(id)a1;
- (id)getPlayersDidAppear;
- (BOOL)isPlayedItemIdSetMore:(id)a0;
- (void)recordPlayedItemID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
