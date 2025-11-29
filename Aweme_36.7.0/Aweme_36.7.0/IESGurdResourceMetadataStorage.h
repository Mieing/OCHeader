@class IESGurdResourceMetadataCache;

@interface IESGurdResourceMetadataStorage : NSObject

@property (class, retain, nonatomic) IESGurdResourceMetadataCache *activeMetadataCache;

+ (id)activeMetaForAccessKey:(id)a0 channel:(id)a1;
+ (id)copyActiveMetadataDictionary;
+ (void)saveActiveMeta:(id)a0;
+ (void)deleteActiveMetaForAccessKey:(id)a0 channel:(id)a1;
+ (void)clearAllMetadata;
+ (id)metadataCacheWithPath:(id)a0 metadataCapacity:(int)a1 metadataClass:(Class)a2 enableIndexLog:(BOOL)a3;
+ (BOOL)migrateMetadataIfNeeded;
+ (void)initialize;
+ (void)setupMetadata;

@end
