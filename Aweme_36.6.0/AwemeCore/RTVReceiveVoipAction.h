@class RTVVoipModel;

@interface RTVReceiveVoipAction : RTVVoipStateMachineResetAction

@property (readonly, nonatomic) RTVVoipModel *voip;
@property (readonly, nonatomic) BOOL forceFullScreen;
@property (readonly, nonatomic) BOOL ignoreToCallingEffect;

- (id)initWithVoip:(id)a0;
- (void)markIgnoreToCallingEffect;
- (void)markForceFullScreen;
- (void).cxx_destruct;

@end
