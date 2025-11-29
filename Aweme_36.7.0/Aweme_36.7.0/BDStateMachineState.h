@class NSObject, BDStateMachine;
@protocol NSCopying;

@interface BDStateMachineState : NSObject

@property (weak, nonatomic) BDStateMachine *stateMachine;
@property (copy, nonatomic) id /* block */ enterBlock;
@property (copy, nonatomic) id /* block */ leaveBlock;
@property (copy, nonatomic) NSObject<NSCopying> *stateID;

- (void).cxx_destruct;
- (void)leave;
- (void)enter;

@end
