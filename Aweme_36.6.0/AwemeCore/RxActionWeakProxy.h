@interface RxActionWeakProxy : RxWeakProxy

@property (readonly, nonatomic) SEL action;
@property (readonly, nonatomic) id object;

+ (id)actionWeakProxyWithTarget:(id)a0 action:(SEL)a1 object:(id)a2;

- (void).cxx_destruct;
- (void)invoke;

@end
