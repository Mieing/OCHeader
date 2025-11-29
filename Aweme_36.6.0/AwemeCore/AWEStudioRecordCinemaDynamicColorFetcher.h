@class NSTimer, ACCRecordMode;
@protocol AWEStudioRecordCinemaDynamicColorFetcherDelegate;

@interface AWEStudioRecordCinemaDynamicColorFetcher : NSObject

@property (nonatomic) BOOL isCameraReady;
@property (retain, nonatomic) ACCRecordMode *mode;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL isCapturing;
@property (nonatomic) double lastCaptureTime;
@property (weak, nonatomic) id<AWEStudioRecordCinemaDynamicColorFetcherDelegate> delegate;
@property (nonatomic) BOOL threeColorEnabled;
@property (nonatomic) BOOL blurImageEnabled;
@property (nonatomic) double interval;

- (void)setCameraReady:(BOOL)a0;
- (void)setCurrentRecordMode:(id)a0;
- (void)p_deleteTimer;
- (void)p_checkAndDelayStart;
- (BOOL)p_precheckOK;
- (void)p_startIfNeeded;
- (void)p_addTimerIfNeeded;
- (void)p_captureIfNeeded;
- (void)applicationWillResignActive:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)applicationDidBecomeActive:(id)a0;
- (void)dealloc;

@end
