@class NSString;

@interface AWEDataLayerNetworkRequestConfig : NSObject

@property (nonatomic) long long frequencyControl;
@property (nonatomic) long long maxRetryTimes;
@property (copy, nonatomic) NSString *businessURI;
@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) long long timeout;
@property (nonatomic) long long retryTimes;
@property (nonatomic) long long requestType;

- (void).cxx_destruct;

@end
