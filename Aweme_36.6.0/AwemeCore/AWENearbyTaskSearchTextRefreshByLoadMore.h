@interface AWENearbyTaskSearchTextRefreshByLoadMore : AWENearbyBaseTask

@property (copy, nonatomic) id /* block */ executor;
@property (nonatomic) long long limitCount;

+ (void)_aweLazyRegisterStaticLoad;

- (void).cxx_destruct;
- (void)executeWithContext:(id)a0;
- (id)initWithExecutor:(id /* block */)a0;
- (id)triggerType;

@end
