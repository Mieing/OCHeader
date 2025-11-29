@interface AWEGrouponTaskSearchTextRefreshByForeground : AWEGrouponBaseTask

@property (copy, nonatomic) id /* block */ executor;

+ (void)_aweLazyRegisterStaticLoad;

- (void).cxx_destruct;
- (void)executeWithContext:(id)a0;
- (id)initWithExecutor:(id /* block */)a0;
- (id)triggerType;

@end
