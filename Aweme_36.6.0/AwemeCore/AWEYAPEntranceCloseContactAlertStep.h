@class NSString;

@interface AWEYAPEntranceCloseContactAlertStep : NSObject <AWEYAPEntranceProcessStepProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)doStepWithRoutine:(id)a0 allRoutines:(id)a1 completion:(id /* block */)a2;
- (void)endStepWithRoutine:(id)a0 allRoutines:(id)a1;

@end
