@class NSString, RxDeferred, NSURLRequest, RxWebServiceAccess;
@protocol RxHTTPRetryableValidatorInterface;

@interface __RxWebServiceAccessRetryableTask : NSObject <RxRetryable> {
    NSString *_identifier;
    unsigned long long _maxAttemptTimes;
    double _backoffDuration;
}

@property (readonly, nonatomic) RxWebServiceAccess *webServiceAccess;
@property (readonly, nonatomic) NSURLRequest *retryableRequest;
@property (readonly, nonatomic) RxDeferred *deferred;
@property (readonly, nonatomic) id<RxHTTPRetryableValidatorInterface> httpRetryableValidator;
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
- (id)initWithWebServiceAccess:(id)a0 retryableRequest:(id)a1 httpRetryableValidator:(id)a2 deferred:(id)a3;
- (void).cxx_destruct;
- (void)dealloc;

@end
