@interface KryptonOnceCallback : NSObject

@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) BOOL hasCalled;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (void)invoke;

@end
