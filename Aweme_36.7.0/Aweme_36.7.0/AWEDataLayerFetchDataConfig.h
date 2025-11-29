@class NSString;

@interface AWEDataLayerFetchDataConfig : NSObject

@property (nonatomic) long long fetchPolicy;
@property (nonatomic) long long requestType;
@property (nonatomic) long long frequencyControl;
@property (nonatomic) long long timeout;
@property (nonatomic) long long retryTimes;
@property (nonatomic) unsigned long long cacheOptions;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic) unsigned long long maxAge;
@property (nonatomic) unsigned long long freshnessTime;
@property (nonatomic) BOOL cleanable;
@property (copy, nonatomic) NSString *userId;

- (void).cxx_destruct;
- (id)init;

@end
