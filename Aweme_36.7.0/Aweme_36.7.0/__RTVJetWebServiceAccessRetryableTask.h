@class NSURLRequest, RxDeferred, NSString;
@protocol RTVJetRequestRetryObserverProtocol, RTVJetHttpWebAccessProtocol, RxHTTPRetryableValidatorInterface;

@interface __RTVJetWebServiceAccessRetryableTask : NSObject <RxRetryable> {
    NSString *_identifier;
    unsigned long long _maxAttemptTimes;
    double _backoffDuration;
}

@property (readonly, nonatomic) id<RTVJetHttpWebAccessProtocol> webServiceAccess;
@property (readonly, nonatomic) NSURLRequest *retryableRequest;
@property (readonly, nonatomic) RxDeferred *deferred;
@property (readonly, nonatomic) id<RxHTTPRetryableValidatorInterface> httpRetryableValidator;
@property (readonly, weak, nonatomic) id<RTVJetRequestRetryObserverProtocol> retryObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)rx_retryableIdentifier;
- (id)rx_retryableVersion;
- (unsigned long long)rx_retryableMaxRetryTimes;
- (double)rx_retryableBaseBackoffDuration;
- (long long)rx_retryableReasons;
- (id)rx_retryWithTimes:(unsigned long long)a0 reason:(long long)a1;
- (id)initWithWebServiceAccess:(id)a0 retryableRequest:(id)a1 httpRetryableValidator:(id)a2 retryObserver:(id)a3 deferred:(id)a4;
- (void).cxx_destruct;
- (void)dealloc;

@end
