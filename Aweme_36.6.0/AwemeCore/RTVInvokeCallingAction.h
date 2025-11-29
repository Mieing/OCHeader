@class NSDictionary, RTVVoipModel;

@interface RTVInvokeCallingAction : RTVVoipStateMachineResetAction

@property (readonly, nonatomic) RTVVoipModel *voip;
@property (readonly, copy, nonatomic) NSDictionary *trackDictionary;

- (id)initWithVoip:(id)a0 trackDictionary:(id)a1;
- (void).cxx_destruct;

@end
