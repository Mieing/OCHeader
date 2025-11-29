@protocol RxRetryManagerInterface, RxInjector, RxHTTPRetryableValidatorInterface;

@interface RxRetryableWebServiceAccess : RxWebServiceAccess

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RxRetryManagerInterface> retryManager;
@property (readonly, nonatomic) id<RxHTTPRetryableValidatorInterface> httpRetryableValidator;

+ (id)rxInjectorInitializer;

- (void)rxAwakeFromPropertyInjection;
- (id)JSONWithURLRequest:(id)a0 deferred:(id)a1;
- (id)initWithHttpWebAccess:(id)a0 httpErrorParser:(id)a1 webServiceAccessErrorListener:(id)a2 mismatchedCertificateListener:(id)a3 webServiceAccessHeaderFieldFiller:(id)a4 mainQueue:(id)a5 operationQueue:(id)a6 notificationCenter:(id)a7 httpRetryableValidator:(id)a8;
- (void).cxx_destruct;

@end
