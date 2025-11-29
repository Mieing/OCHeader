@interface RACSubscriptingAssignmentTrampoline : NSObject

@property (readonly, nonatomic) id target;
@property (readonly, nonatomic) id nilValue;

- (id)initWithTarget:(id)a0 nilValue:(id)a1;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;

@end
