@class NSString, NSArray, WCState;

@interface WCEvent : MMObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *sourceStates;
@property (readonly, nonatomic) WCState *destinationState;

- (id)initWithName:(id)a0 transitioningFromStates:(id)a1 toState:(id)a2;
- (id)description;
- (void).cxx_destruct;

@end
