@class NSString;

@interface AWETokamakMetricMonitor : NSObject <MXMetricManagerSubscriber> {
    BOOL verbose;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)__trackHangDiagnostic:(id)a0;
- (void)__trackCrashDiagnostic:(id)a0;
- (id)__createJSONContainer:(id)a0;
- (id)__packageCallStackTree:(id)a0;
- (void)start;
- (void)didReceiveMetricPayloads:(id)a0;
- (void)didReceiveDiagnosticPayloads:(id)a0;

@end
