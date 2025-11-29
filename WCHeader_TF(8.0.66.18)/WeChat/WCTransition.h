@class WCEvent, WCState, NSDictionary;

@interface WCTransition : MMObject

@property (readonly, nonatomic) WCEvent *event;
@property (readonly, nonatomic) WCState *sourceState;
@property (readonly, nonatomic) WCState *destinationState;
@property (readonly, nonatomic) NSDictionary *userInfo;

- (id)initWithEvent:(id)a0 fromState:(id)a1 userInfo:(id)a2;
- (id)description;
- (void).cxx_destruct;

@end
