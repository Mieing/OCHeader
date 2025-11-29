@interface RxBlockOperation : RxOperation

@property (copy, nonatomic) id /* block */ block;

- (id)initWithMainOperationBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)execute;
- (id)initWithOperationBlock:(id /* block */)a0;

@end
