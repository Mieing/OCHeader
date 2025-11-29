@class VEAlgorithmSession, AWEStudioImageDetectTracker;

@interface AWEStudioImageDetectManager : NSObject

@property (readonly, nonatomic) unsigned long long currentStep;
@property (retain, nonatomic) VEAlgorithmSession *algorithmSession;
@property (retain, nonatomic) AWEStudioImageDetectTracker *tracker;

+ (id)shared;

- (void)detect:(id)a0 completion:(id /* block */)a1;
- (void)p_main_thread_start:(id)a0 completion:(id /* block */)a1;
- (void)updateCurrentStep:(unsigned long long)a0;
- (void)p_main_thread_detect:(id)a0 imagePaths:(id)a1 applicationName:(id)a2 callback:(id /* block */)a3;
- (void).cxx_destruct;
- (BOOL)isRunning;
- (id)init;

@end
