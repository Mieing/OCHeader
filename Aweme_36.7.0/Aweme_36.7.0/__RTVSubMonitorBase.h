@class NSTimer, NSString;
@protocol RTVSubMonitorDelegate;

@interface __RTVSubMonitorBase : NSObject <RTVSubMonitor>

@property (readonly, nonatomic) NSTimer *timer;
@property (readonly, nonatomic, getter=isEvaluationMonitor) BOOL evaluationMonitor;
@property (weak, nonatomic) id<RTVSubMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (id)fetchCurrentUtilization:(BOOL)a0;
- (void)startSubMonitor;
- (void)stopSubMonitor;
- (void)pauseSubMonitor;
- (void)resumeSubMonitor;
- (unsigned long long)supportAggReasons;
- (id)scheduledTimerWithTimeInterval:(double)a0 block:(id /* block */)a1 repeats:(BOOL)a2;
- (void).cxx_destruct;
- (double)timeStamp;
- (void)dealloc;

@end
