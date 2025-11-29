@class Protocol;

@interface OSCWeakProxy : NSProxy {
    Protocol *_protocol;
}

@property (readonly, weak, nonatomic) id target;

+ (id)proxyWithTarget:(id)a0;
+ (id)proxyWithTarget:(id)a0 protocol:(id)a1;

- (id)initWithTarget:(id)a0;
- (id)initWithTarget:(id)a0 protocol:(id)a1;
- (BOOL)conformsToProtocol:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;

@end
