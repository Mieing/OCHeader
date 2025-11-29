@interface IESGurdFileMetaManager : NSObject

+ (void)setActiveMetaDictionary:(id)a0;
+ (void)setupMetaDataIfNeeded;
+ (id)activeMetaDictionary;
+ (id)localMetaDataWithPath:(id)a0;
+ (void)cleanCacheMetaData;
+ (BOOL)shouldMigrate;
+ (void)enumerateActiveMetaUsingBlock:(id /* block */)a0;

@end
