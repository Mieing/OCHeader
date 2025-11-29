@class IESLiveInteractiveMotionDetectorGalileoAPI;

@interface IESLiveInteractiveMotionDetectorConfig : NSObject

@property (retain, nonatomic) IESLiveInteractiveMotionDetectorGalileoAPI *api;
@property (nonatomic) double detectTimeInterval;
@property (nonatomic) double accelerameterThreshold;
@property (nonatomic) double shakeEndTimeIntervalThreshold;
@property (nonatomic) double accelerameterThreshold4LinkUser;
@property (nonatomic) double shakeEndTimeIntervalThreshold4LinkUser;

- (id)initWithSettingDict:(id)a0;
- (void)setupGalileo;
- (void)updateConfigWithAccelerameterThreshold:(double)a0 shakeEndTimeIntervalThreshold:(double)a1;
- (void)fetchGalileoConfig;
- (void).cxx_destruct;

@end
