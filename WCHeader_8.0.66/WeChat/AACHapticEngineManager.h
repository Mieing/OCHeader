@class NSRecursiveLock, NSDate, NSMutableArray, CHHapticEngine;

@interface AACHapticEngineManager : NSObject

@property (retain, nonatomic) CHHapticEngine *engine;
@property (nonatomic) BOOL engineStatus;
@property (nonatomic) BOOL isAudioInteruptBegan;
@property (nonatomic) BOOL headphonesConnected;
@property (nonatomic) BOOL isBackgroundAudioMode;
@property (nonatomic) BOOL isNeedResetCategory;
@property (retain, nonatomic) NSMutableArray *ahapAry;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSDate *firstDate;
@property (retain, nonatomic) NSDate *pauseDate;
@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) double offsetTime;

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)InitializeTheEngine;
- (void)startEngine;
- (void)stopEngine;
- (void)stopPlayer:(id)a0;
- (double)getCurrentTime;
- (BOOL)invalidPlayerID:(long long)a0;
- (BOOL)stopCoreHaptic:(long long)a0;
- (long long)startPlayHapticWithAhapPath:(id)a0 patternAry:(id)a1 mode:(unsigned long long)a2 delayTime:(double)a3 Loop:(unsigned long long)a4 amplitude:(id)a5 playProgress:(id /* block */)a6 error:(id /* block */)a7;
- (id)StripAudioPath:(id)a0 :(id)a1;
- (void)statrtPlayerWithPattern:(id)a0 currentCount:(int)a1;
- (BOOL)sendParameters:(id)a0 ID:(long long)a1 delayTime:(double)a2 error:(id /* block */)a3;
- (BOOL)scheduleParameterCurve:(id)a0 ID:(long long)a1 delayTime:(double)a2 error:(id /* block */)a3;
- (BOOL)sendDelayIntervalTime:(double)a0 ID:(long long)a1;
- (void)sendLoopParameter:(int)a0 :(int)a1;
- (BOOL)isPlaying;
- (BOOL)seekTo:(int)a0;
- (BOOL)pause;
- (BOOL)start;
- (void)removeObjecFromLockArry:(id)a0;
- (void)addObjecToLockArry:(id)a0;
- (id)copyObjecFromLockArry:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
