@interface AWETransitionWeakProxy : NSProxy

@property (readonly, weak, nonatomic) id target;

+ (id)proxyWithTarget:(id)a0;

- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;

@end
