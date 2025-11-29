@class VEFPSCalculator, NSThread, NSString, NSCondition, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, VEFrameRateSignalReceiver, OS_dispatch_semaphore;

@interface VEAsyncDispatchUnit : VEUnitObject <VEProcessSampleDelegate>

@property (nonatomic) BOOL enableGCD;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSThread *thread;
@property (retain, nonatomic) NSMutableArray *sampleDataQueue;
@property (retain, nonatomic) NSCondition *condition;
@property (nonatomic) unsigned long long maxCacheCount;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) VEFPSCalculator *fpsCalculator;
@property (weak, nonatomic) id<VEFrameRateSignalReceiver> signalReceiver;
@property (retain, nonatomic) NSString *route;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEnableGCD:(BOOL)a0;
- (void)dequeueSampleData;
- (void)clearCacheFrames;
- (BOOL)processSampleData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)stopThread;

@end
