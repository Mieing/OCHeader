@class NSMutableArray;

@interface AACSystemEngineManager : NSObject

@property (retain, nonatomic) NSMutableArray *playIDAry;

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)applicationBecomeActive:(id)a0;
- (void)applicationEnterBackground:(id)a0;
- (double)getCurrentTime;
- (BOOL)invalidPlayerID:(long long)a0;
- (BOOL)stopSystyemAudio:(long long)a0;
- (long long)startPlayHapticWithAhapPath:(id)a0 patternAry:(id)a1 delayTime:(double)a2 allTime:(double)a3 Loop:(unsigned long long)a4 playProgress:(id /* block */)a5 error:(id /* block */)a6;
- (BOOL)sendDelayIntervalTime:(double)a0 ID:(long long)a1;
- (void)sendLoopParameter:(int)a0 :(int)a1;
- (BOOL)isPlaying;
- (BOOL)seekTo:(int)a0;
- (BOOL)pause;
- (BOOL)start;
- (void)removeObjecFromLockArry:(id)a0;
- (void)addObjecToLockArry:(id)a0;
- (id)copyObjecFromLockArry:(id)a0;
- (void).cxx_destruct;

@end
