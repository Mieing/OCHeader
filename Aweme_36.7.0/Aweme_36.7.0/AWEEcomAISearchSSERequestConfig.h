@class NSNumber;

@interface AWEEcomAISearchSSERequestConfig : NSObject

@property (retain, nonatomic) NSNumber *retryMaxCount;
@property (retain, nonatomic) NSNumber *retryTimeInterval;
@property (retain, nonatomic) NSNumber *retryDelayWhenNetworkUnavailable;
@property (retain, nonatomic) NSNumber *customProtectTimeout;
@property (retain, nonatomic) NSNumber *customHeaderReceiveTimeout;
@property (retain, nonatomic) NSNumber *customReadBodyTimeout;

- (void).cxx_destruct;

@end
