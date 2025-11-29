@class NSMutableDictionary;

@interface OpenImResourceStorageCacheInfo : MMObject

@property (retain, nonatomic) NSMutableDictionary *dictAppId2ContactResources;
@property (retain, nonatomic) NSMutableDictionary *dictAppId2LastUpdateTime;

- (id)init;
- (void).cxx_destruct;

@end
