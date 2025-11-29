@class NSString;

@interface AWEYAPEntranceMuteLiveStep : NSObject <AWEYAPEntranceProcessStepProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_cancelMuteAweme;
- (void)changeLivePlayerStatus:(BOOL)a0;
- (void)doStepWithRoutine:(id)a0 allRoutines:(id)a1 completion:(id /* block */)a2;
- (void)endStepWithRoutine:(id)a0 allRoutines:(id)a1;
- (void)muteLivePlayer;
- (void)recoverLivePlayer;
- (void)muteAweme;
- (BOOL)handleControlMuteOpen;

@end
