@interface AWEStudioPromiseExecutor : NSObject

@property (retain, nonatomic) id value;
@property (copy, nonatomic) id /* block */ promiseEnumerator;

+ (void)iterator:(id)a0 value:(id)a1 completion:(id /* block */)a2;

- (id)initWithInitialValue:(id)a0 promiseEnumerator:(id /* block */)a1;
- (id)initWithInitialValue:(id)a0 promises:(id)a1;
- (void)execute:(id /* block */)a0;
- (void).cxx_destruct;

@end
