@class NSMutableArray, NSLock, NSString, VEFPSCalculator, VEVideoDecimator;

@interface VEAdaptiveFrameRateController : NSObject <VEFrameRateSignalReceiver>

@property BOOL isActive;
@property (nonatomic) double maxFPS;
@property (nonatomic) double desiredFPS;
@property (nonatomic) double currentFPS;
@property (nonatomic) double lastDiscardSignalTime;
@property (nonatomic) unsigned long long discardSignalCount;
@property (nonatomic) double lastMoreFrameSignalTime;
@property (nonatomic) double signalInterval;
@property (nonatomic) double keepStartTime;
@property unsigned long long controlType;
@property (retain, nonatomic) VEFPSCalculator *fpsCalculator;
@property (retain, nonatomic) VEVideoDecimator *videoDecimator;
@property (retain, nonatomic) NSMutableArray *fpsArray;
@property (nonatomic) unsigned long long fpsMaxSize;
@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) BOOL needReset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)needMoreFrameSignalWithCurrentFPS:(double)a0;
- (void)receiveCurrentFrameRate:(double)a0;
- (BOOL)frameArrived;
- (void)discardFrameSignalWithCurrentFPS:(double)a0;
- (void)activeController:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
