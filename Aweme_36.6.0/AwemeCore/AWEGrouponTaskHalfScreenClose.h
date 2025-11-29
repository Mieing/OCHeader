@interface AWEGrouponTaskHalfScreenClose : AWEGrouponBaseTask

@property (copy, nonatomic) id /* block */ executor;

- (void).cxx_destruct;
- (void)executeWithContext:(id)a0;
- (double)priority;
- (id)initWithExecutor:(id /* block */)a0;
- (id)triggerType;

@end
