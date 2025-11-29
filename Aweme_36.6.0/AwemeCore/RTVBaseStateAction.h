@interface RTVBaseStateAction : NSObject

@property (readonly, nonatomic) long long actionType;

+ (id)instanceWithActionType:(long long)a0;

- (id)checkResetStateStateMachine;
- (id)description;
- (id)initWithActionType:(long long)a0;

@end
