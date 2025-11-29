@class NSString;
@protocol RTVJetHTTPRetryableValidatorInterface;

@interface __RTVJetHTTPRetryableValidator : NSObject <RxHTTPRetryableValidatorInterface>

@property (readonly, nonatomic) id<RTVJetHTTPRetryableValidatorInterface> httpRetryableValidator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rxInjectorCreateWithArgs:(id)a0 injector:(id)a1;

- (id)validateError:(id)a0 currentRetryTimes:(unsigned long long)a1 reason:(long long)a2;
- (id)initWithRetryableValidator:(id)a0;
- (void).cxx_destruct;

@end
