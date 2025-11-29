@class NSArray, NSDictionary, RTVCompactState;

@interface RTVCompactEvent : NSObject

@property (readonly, copy, nonatomic) id /* block */ eventOperation;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSArray *sourceStates;
@property (readonly, nonatomic) RTVCompactState *destinationState;
@property (copy, nonatomic) id /* block */ shouldFireEventBlock;
@property (copy, nonatomic) NSDictionary *userInfo;

+ (id)eventWithType:(unsigned long long)a0 transitionFromStates:(id)a1 toState:(id)a2;

- (id)initWithType:(unsigned long long)a0 transitionFromStates:(id)a1 toState:(id)a2;
- (void).cxx_destruct;
- (void)setEventOperation:(id /* block */)a0;

@end
