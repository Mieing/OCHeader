@class NSString, CHHapticEngine;
@protocol CHHapticAdvancedPatternPlayer;

@interface BUPlayableHapticPlayer : NSObject <BUPlayableHapticPlayer>

@property (retain, nonatomic) CHHapticEngine *hapticEngine;
@property (retain, nonatomic) id<CHHapticAdvancedPatternPlayer> advancedPatternPlayer;
@property (copy, nonatomic) id /* block */ initCompletion;
@property (nonatomic) unsigned long long playMode;
@property (copy, nonatomic) NSString *jsonString;
@property (nonatomic) BOOL engineHasError;
@property (nonatomic) BOOL engineNeedReset;
@property (nonatomic) BOOL engineStoped;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) double duration;
@property (nonatomic) float intensity;
@property (nonatomic) float sharpness;
@property (nonatomic) double playDuration;
@property (nonatomic) double playStartTime;
@property (nonatomic) double pauseTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)playWithInnerType:(unsigned long long)a0;
+ (BOOL)supportsHaptics;

- (void)configHapticPlayer;
- (void)playWithEventType:(id)a0 duration:(float)a1 intensity:(float)a2 sharpness:(float)a3;
- (void)playWithPattern:(id)a0 atTime:(double)a1;
- (void)playContinuousWithDuration:(float)a0 intensity:(float)a1 sharpness:(float)a2;
- (id)initEngineWithCompletion:(id /* block */)a0;
- (void)playTransientWithIntensity:(float)a0 sharpness:(float)a1;
- (void)playWithJson:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (void)invalidate;
- (void)stop;
- (void)resume;
- (void)dealloc;

@end
