@class NSString, IESLiveRevenueInteractStateMachine;
@protocol IESLivePKProvider;

@interface IESLivePKStateManager : NSObject <IESLiveRevenueInteractStateMachineDelegate>

@property (retain, nonatomic) IESLiveRevenueInteractStateMachine *stateMachine;
@property (weak, nonatomic) id<IESLivePKProvider> pkProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (BOOL)firePKEvent:(long long)a0;
- (BOOL)isInState:(long long)a0;
- (BOOL)isBetweenState:(long long)a0 toState:(long long)a1;
- (void)setupStateMachine;
- (id)currentPKStateStr;
- (id)eventHandleLogsStr;
- (id)initializeNoneState;
- (id)initializeMatchUpState;
- (id)initializeMatchBellState;
- (id)initializeAutoMatchState;
- (id)initializeInvitedState;
- (id)initializeReceivedState;
- (id)initializeBusinessPrepareState;
- (id)initializeJoinedChannelState;
- (id)initializeConnectSucceedState;
- (id)initializePKingState;
- (id)initializePunishState;
- (id)initializeInteractingState;
- (id)initializeFinishedState;
- (void)logInfoWithEvent:(id)a0 extra:(id)a1;
- (void)logErrorWithEvent:(id)a0 extra:(id)a1;
- (void)monitorWithBusinessName:(id)a0 extra:(id)a1;
- (void).cxx_destruct;
- (long long)previousState;

@end
