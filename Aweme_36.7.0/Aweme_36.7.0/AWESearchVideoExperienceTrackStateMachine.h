@protocol AWESearchVideoExperienceTrackStateMachineDelegate;

@interface AWESearchVideoExperienceTrackStateMachine : NSObject

@property (nonatomic) unsigned long long curState;
@property (weak, nonatomic) id<AWESearchVideoExperienceTrackStateMachineDelegate> delegate;

- (unsigned long long)playSuccessStateForWaitingPlay;
- (BOOL)transitionToNewState:(unsigned long long)a0;
- (BOOL)isVirtualFinalState;
- (BOOL)isFinalState;
- (void)resetState:(unsigned long long)a0;
- (BOOL)transitionToNewState:(unsigned long long)a0 extraParams:(id)a1;
- (BOOL)waitingPlay;
- (unsigned long long)PlaySuccessStateForLivePlay;
- (unsigned long long)PlayFailedStateForLivePlay;
- (unsigned long long)PlayCancelStateForLivePlay;
- (unsigned long long)playFailedStateForWaitingPlay;
- (unsigned long long)playCancelStateForWaitingPlay;
- (BOOL)canTransitionToNewState:(unsigned long long)a0;
- (id)initWithState:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)finalState;

@end
