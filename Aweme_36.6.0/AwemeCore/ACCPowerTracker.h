@class NSDictionary;

@interface ACCPowerTracker : NSObject

@property (nonatomic) double startTime;
@property (retain, nonatomic) NSDictionary *startTrackInfo;

- (long long)currentThermalState;
- (void)beginTrack;
- (void)completeTrackWithPublishModel:(id)a0 extraParams:(id)a1;
- (void).cxx_destruct;

@end
