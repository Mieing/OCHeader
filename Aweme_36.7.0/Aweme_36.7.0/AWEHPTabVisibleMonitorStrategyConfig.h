@class AWEHPTabVisibleMonitorDelayDoubleConfirmStrategy, AWEHPTabVisibleMonitorContinuousExceptionCheckStrategy, AWEHPTabVisibleMonitorExceptionDurationCheckStrategy;

@interface AWEHPTabVisibleMonitorStrategyConfig : AWEBaseBizConfigModel

@property (retain, nonatomic) AWEHPTabVisibleMonitorExceptionDurationCheckStrategy *durationCheckStrategy;
@property (retain, nonatomic) AWEHPTabVisibleMonitorDelayDoubleConfirmStrategy *doubleConfirmStrategy;
@property (retain, nonatomic) AWEHPTabVisibleMonitorContinuousExceptionCheckStrategy *continuousCheckStrategy;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
