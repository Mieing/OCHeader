@interface IESECServiceProxy : NSProxy {
    id _service;
    Class _sc;
}

- (void)rebindService:(id)a0;
- (void).cxx_destruct;
- (Class)class;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithService:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
