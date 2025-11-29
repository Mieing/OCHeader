@interface AnimaXPrioritizedTask : NSObject

@property (copy, nonatomic) id /* block */ task;
@property (nonatomic) long long priority;

- (id)initWithTask:(id /* block */)a0 priority:(long long)a1;
- (void).cxx_destruct;

@end
