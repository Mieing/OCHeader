@class NSString, NSDictionary;

@interface AWEShowMonetizePreCacheInfo : NSObject

@property (nonatomic) unsigned long long result;
@property (nonatomic) unsigned long long reason;
@property (readonly, copy, nonatomic) NSString *reasonStr;
@property (copy, nonatomic) NSDictionary *cacheData;

- (void).cxx_destruct;

@end
