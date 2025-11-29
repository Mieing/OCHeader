@class HMDCaptureBacktraceManager, NSString, HMInstance, NSObject;
@protocol OS_dispatch_queue;

@interface HMDCaptureBacktrace : NSObject <HMDExceptionReporterDataProvider>

@property (copy, nonatomic) NSString *type;
@property (nonatomic) long long maxCaptureTime;
@property (nonatomic) long long maxErrorTime;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *exceptionMonitorQueue;
@property (retain, nonatomic) HMDCaptureBacktraceManager *recordManager;
@property (nonatomic) BOOL isStart;
@property (nonatomic) BOOL isStop;
@property (retain, nonatomic) HMInstance *instance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pendingExceptionData;
- (void)exceptionReporterDidReceiveResponse:(BOOL)a0;
- (void)dropExceptionData;
- (id)initCaptureWithType:(id)a0 maxCaptureTime:(long long)a1 maxErrorTime:(long long)a2;
- (void)fireSample:(id)a0;
- (void)shouldReportCaptureBacktraceNow;
- (id)initCaptureWithType:(id)a0 maxCaptureTime:(long long)a1;
- (void).cxx_destruct;
- (unsigned long long)exceptionType;
- (void)startCapture;
- (void)stopCapture:(BOOL)a0;

@end
