@interface RACDynamicSignal : RACSignal

@property (readonly, copy, nonatomic) id /* block */ didSubscribe;

+ (id)createSignal:(id /* block */)a0;

- (id)subscribe:(id)a0;
- (void).cxx_destruct;

@end
