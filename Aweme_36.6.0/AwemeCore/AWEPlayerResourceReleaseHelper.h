@class NSPointerArray, NSRecursiveLock;
@protocol AWEFeedTableViewCellProtocol;

@interface AWEPlayerResourceReleaseHelper : NSObject

@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) BOOL releaseOnEnteringCreation;
@property (readonly, nonatomic) BOOL releaseOnMemoryWarning;
@property (readonly, nonatomic) long long minActivePlayerCount;
@property (readonly, nonatomic) BOOL optimizePlayFlowEnable;
@property (readonly, nonatomic) BOOL nunkiReleaseOnMemoryWarning;
@property (readonly, nonatomic) BOOL releaseOptOnPad;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSPointerArray *playerControllers;
@property (weak, nonatomic) id<AWEFeedTableViewCellProtocol> preloadedCell;

+ (id)sharedInstance;

- (BOOL)enableMemoryOptimizeWithNunki;
- (void)didReceiveMemeoryDangerLevelTopNotification;
- (void)willEnterCreationFlow;
- (void)willExitCreationFlow;
- (void)padWillEnterScene;
- (void)padWillLeaveScene;
- (void)didNunkiReleaseMemeory;
- (void)removeObject:(id)a0 fromPointerArray:(id)a1;
- (void)removePlayerController:(id)a0;
- (void)preparePlayers:(long long)a0;
- (void)releasePlayerResourceWithStrategy:(long long)a0;
- (BOOL)playerStopOptWithCamera;
- (void)doPreparePlayers:(long long)a0;
- (void)doReleasePlayerResourceWithStrategy:(long long)a0;
- (void)addPlayerController:(id)a0;
- (void)onPlayerDealloc:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)dealloc;

@end
