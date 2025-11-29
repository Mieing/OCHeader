@class NSString, Protocol;

@interface IESECStrongProxy : BTDWeakProxy

@property (retain, nonatomic) id strongTarget;
@property (retain, nonatomic) NSString *targetClassName;
@property (retain, nonatomic) Protocol *pt;

+ (id)strongProxyWithTarget:(id)a0 protocol:(id)a1;

- (void)handleNilTarget:(id)a0;
- (void)handleNoSelector:(id)a0;
- (BOOL)selectorIsRequiredIn:(id)a0 selector:(SEL)a1;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
