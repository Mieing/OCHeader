@class Protocol;

@interface IESECDIServiceProxy : BTDWeakProxy {
    id strongTarget;
    Protocol *pt;
}

@property (retain, nonatomic) id adapter;

+ (id)strongProxyWithTarget:(id)a0 protocol:(id)a1;

- (void)tryToFindAdapter;
- (id)signatureForSel:(SEL)a0;
- (BOOL)forwardInvocationToAdapter:(id)a0;
- (void)failedAdapter:(id)a0;
- (BOOL)selectorIsRequiredIn:(id)a0 selector:(SEL)a1;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
