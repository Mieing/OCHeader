@class NSDictionary, IESLiveStateEvent, IESLiveStateMachine, IESLiveState;

@interface IESLiveStateTransition : NSObject

@property (retain, nonatomic) IESLiveStateEvent *event;
@property (weak, nonatomic) IESLiveStateMachine *machine;
@property (retain, nonatomic) IESLiveState *sourceState;
@property (retain, nonatomic) IESLiveState *targetState;
@property (copy, nonatomic) NSDictionary *userInfo;

+ (id)transitionForEvent:(id)a0 sourceState:(id)a1 machine:(id)a2;
+ (id)transitionForEvent:(id)a0 sourceState:(id)a1 machine:(id)a2 userInfo:(id)a3;

- (id)initForEvent:(id)a0 sourceState:(id)a1 machine:(id)a2 userInfo:(id)a3;
- (void).cxx_destruct;

@end
