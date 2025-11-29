@class NSString, NSDictionary;

@interface AWENetworkCacheStrategy : NSObject <AWENetworkCacheStrategyType>

@property (copy, nonatomic) NSString *key;
@property (nonatomic) unsigned long long fetchStrategy;
@property (nonatomic) unsigned long long expiredStrategy;
@property (nonatomic) unsigned long long storeStrategy;
@property (nonatomic) long long expiredCount;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSDictionary *additionalInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
