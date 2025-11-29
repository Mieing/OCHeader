@class NSString;
@protocol RxInjector;

@interface RTVWebServiceAccess : RxRetryableWebServiceAccess <RTVHttpWebServiceAccessProtocol>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rxInjectorInitializer;
+ (Class)webServiceAccessConnectorClass;

- (BOOL)isHTTPStatusCodeError:(id)a0;
- (id)setupJSONRequestSerializerWithRequest:(id)a0;
- (id)setupRequestHeaderForColdRequest:(id)a0 isManulRequest:(BOOL)a1;
- (id)setupFormRequestSerializerWithRequest:(id)a0;
- (void).cxx_destruct;

@end
