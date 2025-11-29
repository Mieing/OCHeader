@interface IESLiveComponentReleaseObserver : NSObject

@property (copy, nonatomic) id /* block */ block;

+ (id)observerWithBlock:(id /* block */)a0;

- (id)initWithDeallocBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
