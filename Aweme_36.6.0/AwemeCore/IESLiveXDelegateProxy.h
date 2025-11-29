@class NSString;

@interface IESLiveXDelegateProxy : NSProxy <XDelegateProxy>

@property (weak, nonatomic) id forwardToDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proxyWithTarget:(id)a0;

- (void)handleTrackMessage:(SEL)a0 withArguments:(id)a1;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (Class)class;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isProxy;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
