@class RTVXRRoomMessage, RxDeferred, NSString;
@protocol RTVXRRoomMessageSender, RTVFeedCMDMessageSendPolicy;

@interface __RTVFeedCMDMessageRetryableTask : NSObject <RxRetryable>

@property (readonly, nonatomic) id<RTVXRRoomMessageSender> messageSender;
@property (readonly, nonatomic) RTVXRRoomMessage *message;
@property (readonly, nonatomic) RxDeferred *deferred;
@property (readonly, nonatomic) unsigned long long maxRetryCount;
@property (readonly, nonatomic) unsigned long long timeout;
@property (readonly, nonatomic) id<RTVFeedCMDMessageSendPolicy> policy;
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
- (id)initWithMessageSender:(id)a0 message:(id)a1 maxRetryCount:(unsigned long long)a2 timeout:(unsigned long long)a3 deferred:(id)a4 policy:(id)a5;
- (void).cxx_destruct;

@end
