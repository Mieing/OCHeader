@class NSMutableDictionary, IESMetadataStorage;

@interface IESGurdResourceMetadataCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *metadataDictionary;
@property (retain, nonatomic) IESMetadataStorage *metadataStorage;
@property (readonly, nonatomic) int version;
@property (readonly, nonatomic) long long metadataCount;

+ (id)metadataCacheWithConfiguration:(id)a0 metadataClass:(Class)a1;
+ (void)initialize;

- (void)loadMetadataWithConfiguration:(id)a0 metadataClass:(Class)a1;
- (void)cacheMetadataInMemory:(id)a0 isDuplicated:(BOOL *)a1;
- (void)deleteMetadataForAccessKey:(id)a0 channel:(id)a1;
- (void)clearAllMetadata;
- (id)copyMetadataDictionary;
- (void)saveMetadata:(id)a0;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;

@end
