@interface _BDXNSObjectKVOBlockTarget : NSObject

@property (copy, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
