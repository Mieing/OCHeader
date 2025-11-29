@interface AWEIMRunloopTask : NSObject

@property (nonatomic) long long scope;
@property (copy, nonatomic) id /* block */ action;
@property (nonatomic) long long state;

- (id)scope:(long long)a0;
- (void).cxx_destruct;
- (void)execute;
- (id)initWithAction:(id /* block */)a0;

@end
