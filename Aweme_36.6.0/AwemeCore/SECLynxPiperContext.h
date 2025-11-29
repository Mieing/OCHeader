@class NSDictionary, NSString, NSInvocation;

@interface SECLynxPiperContext : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
}

@property (copy, nonatomic) NSDictionary *internalParams;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *module;
@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSInvocation *invocation;
@property (nonatomic) unsigned long long callbackType;

- (BOOL)isStandardLynxBridgeModule;
- (id)extractStandardPiperParamsFromInvocation:(id)a0;
- (id)extractParamsFromInvocation:(id)a0;
- (void)prepareWithInvocation:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)params;
- (void)dealloc;
- (void)setParams:(id)a0;

@end
