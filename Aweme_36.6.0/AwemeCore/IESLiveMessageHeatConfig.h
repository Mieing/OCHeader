@class NSNumber;

@interface IESLiveMessageHeatConfig : NSObject

@property (retain, nonatomic) NSNumber *heatUpThreshold;
@property (retain, nonatomic) NSNumber *coolDownThreshold;
@property (nonatomic) double stableTimeDuration;

- (void).cxx_destruct;
- (id)init;

@end
