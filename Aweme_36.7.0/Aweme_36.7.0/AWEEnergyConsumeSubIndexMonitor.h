@class NSMutableDictionary, NSMapTable, NSHashTable, NSMutableSet;

@interface AWEEnergyConsumeSubIndexMonitor : NSObject

@property (nonatomic) BOOL enablePlayerVCsTrack;
@property (retain, nonatomic) NSHashTable *BDPlayers;
@property (retain, nonatomic) NSHashTable *LOTViews;
@property (retain, nonatomic) NSMapTable *displayLinks;
@property (retain, nonatomic) NSMapTable *NSTimers;
@property (retain, nonatomic) NSMutableDictionary *gcdTimers;
@property (retain, nonatomic) NSMutableSet *runningGCDTimers;
@property (retain, nonatomic) NSMutableDictionary *gcdTimerQueueInfo;
@property (retain, nonatomic) NSHashTable *playerVCs;
@property (retain, nonatomic) NSMutableDictionary *lynxTemplates;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
@property (nonatomic) double calculateLocationDuration;
@property (nonatomic) double lastLocationStartTime;
@property (nonatomic) unsigned long long totalDiskRead;
@property (nonatomic) unsigned long long totalDiskWrite;
@property (nonatomic) unsigned long long totalLogicalWrite;
@property (nonatomic) long long runloopObserverCnt;
@property (nonatomic) BOOL enableAniCountTrack;
@property (nonatomic) BOOL enableDisplaylinkCountTrack;
@property (nonatomic) BOOL enableNSTimerCountTrack;
@property (nonatomic) BOOL enableGCDTimerCountTrack;
@property (nonatomic) BOOL enableLocationTimeTrack;
@property (nonatomic) BOOL enableIOTrack;

+ (id)shared;

- (void)clearLocationDuration;
- (void)clearCalculateIOInfo;
- (double)locationDuration;
- (BOOL)getPeriodIOInfo:(unsigned long long *)a0 diskWrite:(unsigned long long *)a1 logicalWrite:(unsigned long long *)a2;
- (long long)BDAnimationsCount;
- (long long)lottieAnimationsCount;
- (id)generateKeyWithTimer:(id)a0 target:(id)a1 selector:(SEL)a2;
- (void)recordNSTimer:(id)a0 withKey:(id)a1;
- (void)recordGCDTimer:(id)a0 withKey:(id)a1;
- (void)addBDPlayer:(id)a0;
- (void)removeBDPlayer:(id)a0;
- (void)addLOTView:(id)a0;
- (void)removeLOTView:(id)a0;
- (void)setDisplayLink:(id)a0 target:(id)a1 selector:(SEL)a2;
- (void)updateDisplayLinkInfo;
- (long long)runDisplayLinkCount;
- (long long)pauseDisplayLinkCount;
- (id)displayLinkRunCount:(long long *)a0 pauseCount:(long long *)a1;
- (void)addNSTimers:(id)a0 invocation:(id)a1;
- (void)addNSTimers:(id)a0 originalInterval:(double)a1 target:(id)a2 selector:(SEL)a3 repeats:(BOOL)a4 isScheduled:(BOOL)a5;
- (void)addNSTimers:(id)a0 originalInterval:(double)a1 block:(id /* block */)a2 repeats:(BOOL)a3 isScheduled:(BOOL)a4;
- (void)NSTimersAddToRunloop:(id)a0;
- (id)NSTimerCount:(long long *)a0;
- (id)GCDTimerCount:(long long *)a0;
- (void)updateGCDTimer:(id)a0 block:(id /* block */)a1 selName:(id)a2 isSafety:(BOOL)a3 originalInterval:(double)a4 timerName:(id)a5;
- (void)updateGCDTimer:(id)a0 queue:(id)a1;
- (void)addGCDTimer:(id)a0 block:(id /* block */)a1 isSafety:(BOOL)a2 originalInterval:(double)a3;
- (void)setGCDTimerRunning:(id)a0 :(BOOL)a1;
- (void)cancelGCDTimer:(id)a0;
- (void)addPlayVideoVC:(id)a0;
- (void)removePlayVideoVC:(id)a0;
- (id)playVideoInfo:(long long *)a0;
- (void)addLynxTemplate:(id)a0 URL:(id)a1;
- (void)removeLynxTemplate:(id)a0;
- (id)lynxTemplateInfo:(long long *)a0;
- (void)recordLocationStart;
- (void)recordLocationEnd;
- (void)didReceiveRequestLog:(id)a0;
- (void)update_observer_count:(long long)a0;
- (long long)RunLoopObserverCount;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
