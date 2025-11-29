@class NSString;

@interface BDSimPlayerDynamicBlockManager : NSObject <IESPlayerLoadControlInterface>

@property (nonatomic) long long firstBufferedDurationMs;
@property (nonatomic) long long firstBufferedTime;
@property (nonatomic) BOOL dynamicBlockAverageSpeedStrategy;
@property (nonatomic) double dynamicBlockAverageSpeedThreshold;
@property (nonatomic) BOOL dynamicBlockMinBufferStrategy;
@property (nonatomic) double dynamicBlockMinBuffer;
@property (nonatomic) BOOL dynamicBlockDistinguishRebuffering;
@property (nonatomic) double dynamicBlockDurationPreloaded;
@property (nonatomic) double dynamicBlockDurationNonPreloaded;
@property (nonatomic) BOOL preloaded;
@property (nonatomic) long long lastBufferedDurationMs;
@property (nonatomic) long long lastBufferedTime;
@property (nonatomic) double blockCnt;
@property (nonatomic) BOOL loadControlOpen;
@property (nonatomic) BOOL dynamicBlockLatestSpeedStrategy;
@property (nonatomic) double dynamicBlockSpeedThreshold;
@property (nonatomic) long long dynamicBlockStrategyType;
@property (nonatomic) double dynamicBlockDurationInitial;
@property (nonatomic) double dynamicBlockFactor;
@property (nonatomic) double dynamicBlockDurationMax;
@property (nonatomic) double videoBuffer;
@property (nonatomic) double audioBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldStartPlayback:(long long)a0 withplaybackSpeed:(float)a1 withreBuffering:(BOOL)a2;
- (long long)onTrackSelected:(long long)a0;
- (BOOL)checkBlockConditionWithBufferedTime:(double)a0;
- (BOOL)shouldStartPlayback:(long long)a0 withplaybackSpeed:(float)a1;
- (BOOL)checkSpeedConditionWithBufferedTime:(long long)a0 currentBufferedTime:(double)a1;
- (BOOL)checkMinBufferConditionWithBufferedTime:(long long)a0;
- (id)init;

@end
