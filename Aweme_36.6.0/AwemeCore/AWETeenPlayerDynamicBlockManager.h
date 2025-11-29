@class NSString;

@interface AWETeenPlayerDynamicBlockManager : NSObject <IESPlayerLoadControlInterface>

@property (nonatomic) long long lastBufferedDurationMs;
@property (nonatomic) long long lastBufferedTime;
@property (nonatomic) double blockCnt;
@property (nonatomic) BOOL loadControlOpen;
@property (nonatomic) BOOL dynamicFinishBlockWithSpeedStrategy;
@property (nonatomic) double dynamicFinishBlockWithSpeedThreshold;
@property (nonatomic) long long dynamicFinishBlockStrategyType;
@property (nonatomic) double dynamicFinishBlockDurationInitial;
@property (nonatomic) double dynamicFinishBlockFactor;
@property (nonatomic) double dynamicFinishBlockDurationMax;
@property (nonatomic) double videoBuffer;
@property (nonatomic) double audioBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
