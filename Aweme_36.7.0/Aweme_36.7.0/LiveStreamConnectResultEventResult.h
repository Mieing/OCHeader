@interface LiveStreamConnectResultEventResult : NSObject

@property (nonatomic) BOOL connectSuccess;
@property (nonatomic) long long retryCount;
@property (nonatomic) long long streamRetryCount;

@end
