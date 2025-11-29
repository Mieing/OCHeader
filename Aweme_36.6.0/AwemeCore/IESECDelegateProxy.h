@class NSHashTable;

@interface IESECDelegateProxy : NSProxy

@property (weak, nonatomic) id masterDelegate;
@property (retain, nonatomic) NSHashTable *slaveDelegates;

+ (id)proxyWithMasterDelegate:(id)a0 slaveDelegates:(id)a1;
+ (id)proxyWithMasterDelegate:(id)a0;

- (id)initWithMasterDelegate:(id)a0 slaveDelegates:(id)a1;
- (void).cxx_destruct;
- (Class)class;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (unsigned long long)hash;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isProxy;
- (BOOL)respondsToSelector:(SEL)a0;
- (Class)superclass;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)self;
- (id)performSelector:(SEL)a0;
- (id)performSelector:(SEL)a0 withObject:(id)a1;
- (id)performSelector:(SEL)a0 withObject:(id)a1 withObject:(id)a2;

@end
