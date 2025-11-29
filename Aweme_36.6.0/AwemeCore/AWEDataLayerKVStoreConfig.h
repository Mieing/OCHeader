@class NSString, NSDictionary;

@interface AWEDataLayerKVStoreConfig : NSObject <AWEDataLayerKVStoreConfigProtocol>

@property (nonatomic) unsigned long long cacheOptions;
@property (nonatomic) unsigned long long maxAge;
@property (nonatomic) unsigned long long lastUpdate;
@property (nonatomic) int cleanable;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
