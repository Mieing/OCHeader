@class NSObject;
@protocol BDPCommonBridgeModule;

@interface BDPCommonBridgeModule_Proxy : NSProxy

@property (retain) Class moduleClass;
@property (retain, nonatomic) NSObject<BDPCommonBridgeModule> *target;

+ (id)proxyWithModuleClass:(Class)a0;

- (SEL)selectorForJSMethod:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (Class)class;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (unsigned long long)hash;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isProxy;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isEqual:(id)a0;
- (Class)superclass;
- (id)debugDescription;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
