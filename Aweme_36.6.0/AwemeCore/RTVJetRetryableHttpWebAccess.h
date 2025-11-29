@class NSString, __RTVJetHTTPRetryableValidator;
@protocol RxRetryManagerInterface, RxInjector, RTVJetHttpWebAccessProtocol;

@interface RTVJetRetryableHttpWebAccess : NSObject

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RxRetryManagerInterface> retryManager;
@property (readonly, nonatomic) __RTVJetHTTPRetryableValidator *httpRetryableValidator;
@property (readonly, nonatomic) id<RTVJetHttpWebAccessProtocol> webAccess;
@property (readonly, copy, nonatomic) NSString *businessTag;

+ (id)rxInjectorCreateWithArgs:(id)a0 injector:(id)a1;

- (void)rxAwakeFromPropertyInjection;
- (id)POSTRequestWithName:(id)a0 queryItems:(id)a1 JSONBody:(id)a2;
- (id)setupJSONRequestSerializerWithRequest:(id)a0;
- (id)JSONWithURLRequest:(id)a0 observer:(id)a1;
- (id)initWithBusinessTag:(id)a0;
- (void).cxx_destruct;

@end
