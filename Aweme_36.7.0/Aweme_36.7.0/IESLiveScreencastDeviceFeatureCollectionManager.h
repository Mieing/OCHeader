@class NSMutableArray;

@interface IESLiveScreencastDeviceFeatureCollectionManager : NSObject

@property (retain, nonatomic) NSMutableArray *timers;
@property (retain, nonatomic) NSMutableArray *deviceFeatures;
@property (nonatomic) long long state;

- (void)stopCollect;
- (void)startCollect;
- (void)allocateTimer;
- (void)collectFeatureData:(id)a0;
- (void)addDeviceFeature:(id)a0;
- (void)pauseCollect;
- (void)resumeCollect;
- (void).cxx_destruct;
- (void)startTimer;
- (id)init;

@end
