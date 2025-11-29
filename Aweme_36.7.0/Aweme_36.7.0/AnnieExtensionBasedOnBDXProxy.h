@class AnnieExtensionBasedOnBDXProxyFallback, NSObject;

@interface AnnieExtensionBasedOnBDXProxy : NSProxy

@property (weak, nonatomic) NSObject *bdxBase;
@property (retain, nonatomic) NSObject *annieExtension;
@property (retain, nonatomic) AnnieExtensionBasedOnBDXProxyFallback *fallback;

- (void)redirectToFallback:(id)a0;
- (id)initWithBDXBase:(id)a0 annieExtension:(id)a1;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
