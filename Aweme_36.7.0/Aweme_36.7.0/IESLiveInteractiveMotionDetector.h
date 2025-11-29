@class CMMotionManager, IESLiveInteractiveMotionDetectorConfig;

@interface IESLiveInteractiveMotionDetector : NSObject

@property (retain, nonatomic) CMMotionManager *cmManager;
@property (retain, nonatomic) IESLiveInteractiveMotionDetectorConfig *config;
@property (nonatomic) double lastShakeTime;
@property (copy, nonatomic) id /* block */ accelerameterThresholdInjected;
@property (copy, nonatomic) id /* block */ shakeEndTimeIntervalThresholdInjected;

+ (id)sharedQueue;

- (double)accelerameterThreshold;
- (double)shakeEndTimeIntervalThreshold;
- (void)startDetectMotionShakeWithCompletion:(id /* block */)a0;
- (void)stopDetectMotion;
- (void)setupCMManager;
- (void).cxx_destruct;
- (id)init;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
