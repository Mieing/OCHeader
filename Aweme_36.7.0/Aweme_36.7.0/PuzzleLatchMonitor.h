@class NSString;

@interface PuzzleLatchMonitor : NSObject <IESLatchMonitorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportCustomWithEventName:(id)a0 url:(id)a1 lynxView:(id)a2 metric:(id)a3 category:(id)a4 extra:(id)a5 maySample:(BOOL)a6;
- (void)reportCustomWithEventName:(id)a0 containerId:(id)a1 url:(id)a2 lynxView:(id)a3 metric:(id)a4 category:(id)a5 extra:(id)a6 maySample:(BOOL)a7;

@end
