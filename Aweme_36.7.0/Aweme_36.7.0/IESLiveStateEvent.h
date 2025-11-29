@class NSString, NSArray, IESLiveState;

@interface IESLiveStateEvent : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *sourceStates;
@property (retain, nonatomic) IESLiveState *targetState;
@property (nonatomic) long long type;
@property (copy, nonatomic) id /* block */ shouldFireBlock;
@property (copy, nonatomic) id /* block */ willFireBlock;
@property (copy, nonatomic) id /* block */ didFireBlock;

+ (id)eventWithName:(id)a0 transitionFromStates:(id)a1 toState:(id)a2;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithName:(id)a0 transitionFromStates:(id)a1 toState:(id)a2;

@end
