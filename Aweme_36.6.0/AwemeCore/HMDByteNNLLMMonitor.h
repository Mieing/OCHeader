@class NSString;

@interface HMDByteNNLLMMonitor : HeimdallrModule <HMDAPPExitReasonDetectorProtocol>

@property BOOL enableByteNNHook;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMonitor;

- (void)runTaskIndependentOfStart;
- (void)didDetectExitReason:(int)a0 desc:(id)a1 info:(id)a2;
- (long long)maskForReason:(int)a0;
- (void)stop;
- (void)start;

@end
