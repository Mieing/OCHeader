@class RTVJetWebSocketClient, NSString, RTVJetWebSocketRequest, RxDeferred;
@protocol RTVJetRequestRetryObserverProtocol;

@interface __RTVJetWebSocketRetryableTask : NSObject <RxRetryable> {
    NSString *_identifier;
    unsigned long long _maxAttemptTimes;
    double _backoffDuration;
}

@property (readonly, nonatomic) RTVJetWebSocketClient *webSocketClient;
@property (readonly, nonatomic) RTVJetWebSocketRequest *retryableRequest;
@property (readonly, nonatomic) RxDeferred *deferred;
@property (readonly, nonatomic) id<RTVJetRequestRetryObserverProtocol> observer;
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
- (id)initWithWebSocketClient:(id)a0 retryableRequest:(id)a1 observer:(id)a2 deferred:(id)a3;
- (void).cxx_destruct;
- (void)dealloc;

@end
