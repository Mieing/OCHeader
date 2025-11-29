@class BDStateMachineTransition, NSObject, BDStateMachineState;
@protocol NSCopying;

@interface BDStateMachineTransitionContext : NSObject

@property (retain, nonatomic) BDStateMachineState *fromState;
@property (retain, nonatomic) BDStateMachineState *toState;
@property (retain, nonatomic) BDStateMachineTransition *transition;
@property (retain, nonatomic) NSObject<NSCopying> *event;

- (void).cxx_destruct;

@end
