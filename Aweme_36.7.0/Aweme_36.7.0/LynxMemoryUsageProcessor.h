@class NSString, NSMutableDictionary;

@interface LynxMemoryUsageProcessor : NSObject <HMDAPPExitReasonDetectorProtocol, LynxPerformanceReportProcessorProtocol>

@property (retain, nonatomic) NSMutableDictionary *allEntry;
@property (retain, nonatomic) NSMutableDictionary *allTimer;
@property (nonatomic) BOOL hasSetCustomFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didDetectExitReason:(int)a0 desc:(id)a1 info:(id)a2;
- (id)processPerformanceEntry:(id)a0;
- (BOOL)canProcess:(id)a0;
- (id)instanceIdForEntry:(id)a0;
- (void)startTimerWithInstanceId:(id)a0;
- (void)report:(id)a0 stage:(id)a1 props:(id)a2;
- (void)stopTimerWithInstanceId:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setup;

@end
