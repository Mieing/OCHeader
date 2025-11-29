@class NSString;
@protocol LynxHttpInterceptor;

@interface LynxHttpService : NSObject <LynxServiceHttpProtocol>

@property (retain) id<LynxHttpInterceptor> interceptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (id)URLString:(id)a0 appendCommonParams:(id)a1;
+ (unsigned long long)serviceType;

- (void)invokeWithRequest:(id)a0 callback:(id /* block */)a1;
- (void)invokeStreamingWithRequest:(id)a0 callback:(id /* block */)a1 withDelegate:(id)a2;
- (BOOL)setHttpInterceptor:(id)a0;
- (void)requestCallback:(id)a0 obj:(id)a1 request:(id)a2 response:(id)a3 callback:(id /* block */)a4;
- (void).cxx_destruct;

@end
