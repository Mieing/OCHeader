@interface GCBlockInvokeTarget : NSObject

@property (copy, nonatomic) id /* block */ block;

- (id)initWithBlock:(id /* block */)a0;
- (void)invoke:(id)a0;
- (void).cxx_destruct;

@end
