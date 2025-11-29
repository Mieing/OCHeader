@interface ByteBenchStrategySubscribeOC : NSObject {
    struct weak_ptr<bytebench::ByteBenchStrategySubscribe> { struct ByteBenchStrategySubscribe *__ptr_; struct __shared_weak_count *__cntrl_; } subscribe;
}

@property (copy, nonatomic) id /* block */ subscribeBlock;
@property (nonatomic) int appId;

- (void)fetchStrategy;
- (void)subscribeWithModels:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;
- (id)initWithAppid:(int)a0;

@end
