@class NSString, NSDictionary;

@interface AWEECShareCacheItem : NSObject

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSDictionary *value;
@property (nonatomic) double updateTime;
@property (nonatomic) long long cacheValidTime;

- (void).cxx_destruct;
- (BOOL)isExpired;

@end
