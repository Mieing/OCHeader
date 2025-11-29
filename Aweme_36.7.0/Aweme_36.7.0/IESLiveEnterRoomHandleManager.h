@class IESLiveComponentsTraceContext, IESLiveEnterRoomProcessTrace, NSString;

@interface IESLiveEnterRoomHandleManager : NSObject <HMDAPPExitReasonDetectorProtocol, IESLiveEnterRoomTraceDelegate>

@property (retain, nonatomic) IESLiveComponentsTraceContext *traceContext;
@property (retain, nonatomic) IESLiveEnterRoomProcessTrace *traceProcessContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)traceContext;
+ (id)enterProcessTrace;
+ (double)trackStartTimeWithIndex:(id)a0;
+ (id)manager;

- (void)didDetectExitReason:(int)a0 desc:(id)a1 info:(id)a2;
- (void)enterNewRoom:(id)a0;
- (void)registerObserver;
- (void).cxx_destruct;
- (id)init;
- (void)clearAll;

@end
