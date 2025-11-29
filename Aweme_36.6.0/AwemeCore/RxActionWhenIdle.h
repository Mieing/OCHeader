@class NSInvocation;

@interface RxActionWhenIdle : NSObject

@property (retain, nonatomic) NSInvocation *invocation;

+ (id)actionWhenIdleWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;

- (id)initWithInvocation:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)isValid;
- (void)addObserverToRunLoop;
- (void)invoke;
- (void)dealloc;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;

@end
