@class NSString;

@interface ArgusStaticResourceRequestInterceptor : NSObject <IESForestInterceptor, BDXRLSecurityInterceptorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerGlobalInterceptor;
+ (id)sharedInstance;

- (id)interceptorName;
- (void)didCreateRequest:(id)a0;
- (void)shouldOverrideRequestWithUrl:(id)a0 headers:(id)a1 resourceDesc:(id)a2 monitorDelegate:(id)a3 ovverideHandler:(id /* block */)a4;

@end
