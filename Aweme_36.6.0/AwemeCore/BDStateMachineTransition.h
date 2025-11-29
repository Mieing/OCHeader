@class NSArray, NSObject;
@protocol NSCopying;

@interface BDStateMachineTransition : NSObject

@property (nonatomic) long long priority;
@property (copy, nonatomic) NSArray *fromStateIDs;
@property (copy, nonatomic) NSObject<NSCopying> *toStateID;
@property (copy, nonatomic) NSArray *eventIDs;
@property (copy, nonatomic) id /* block */ condition;

+ (id)transitionFromStates:(id)a0 toState:(id)a1 atEvents:(id)a2 underCondition:(id /* block */)a3 priority:(long long)a4;
+ (id)anyTransitionToState:(id)a0 underCondition:(id /* block */)a1 priority:(long long)a2;

- (void).cxx_destruct;

@end
