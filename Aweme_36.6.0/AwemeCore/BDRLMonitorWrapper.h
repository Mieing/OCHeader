@class NSString, BDXMonitor;

@interface BDRLMonitorWrapper : NSObject <BDXRLMonitorDelegate>

@property (retain, nonatomic) BDXMonitor *monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportWithEventName:(id)a0 bizTag:(id)a1 commonParams:(id)a2 metric:(id)a3 category:(id)a4 extra:(id)a5 platform:(long long)a6 aid:(id)a7 sampleLevel:(unsigned long long)a8;
- (void).cxx_destruct;

@end
