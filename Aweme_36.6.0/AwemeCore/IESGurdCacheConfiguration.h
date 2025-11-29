@interface IESGurdCacheConfiguration : NSObject

@property (nonatomic) long long cachePolicy;
@property (nonatomic) long long channelLimitCount;
@property (nonatomic) BOOL enableAppLog;

+ (id)FIFOConfiguration;
+ (id)LRUConfiguration;

@end
