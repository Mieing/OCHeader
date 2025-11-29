@class NSString, NSDictionary;

@interface AWEDataLayerKVCacheInfo : NSObject

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) id value;
@property (nonatomic) int valueType;
@property (nonatomic) unsigned long long lastRead;
@property (nonatomic) unsigned long long lastUpdate;
@property (nonatomic) unsigned long long maxAge;
@property (nonatomic) int cleanable;
@property (nonatomic) int cacheType;
@property (copy, nonatomic) NSDictionary *extra;

- (void).cxx_destruct;

@end
