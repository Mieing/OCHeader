@class NSTimer;

@interface IESWeakSelectorTarget : NSObject

@property (weak, nonatomic) NSTimer *timer;
@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;

+ (void)invalidateTimer:(id)a0;
+ (id)scheduledTimerWithTimeInterval:(double)a0 target:(id)a1 selector:(SEL)a2 repeats:(BOOL)a3;

- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (id)description;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;
- (Class)class;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (unsigned long long)hash;
- (void)fire:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isProxy;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isEqual:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (Class)superclass;
- (id)debugDescription;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
