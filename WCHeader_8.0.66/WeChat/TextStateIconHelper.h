@interface TextStateIconHelper : NSObject

+ (id)parseFromI18nList:(id)a0;
+ (id)exportI18nListFromDict:(id)a0;
+ (id)typeNumberFromConfigId:(id)a0;
+ (id)getStoragePathForType:(unsigned int)a0;
+ (void)encodeAndSaveIconStorage:(id)a0 type:(unsigned int)a1;
+ (id)decodeAndLoadIconStorageForType:(unsigned int)a0;
+ (id)getPassthroughIconListPath;
+ (void)encodeAndSavePassthroughIconList:(id)a0;
+ (id)decodeAndLoadPassthroughIconList;
+ (id)getExperimentTablePath;
+ (void)encodeAndSaveExperimentTable:(id)a0;
+ (id)decodeAndLoadExperimentTable;
+ (void)setIcon:(id)a0 toWebImageView:(id)a1;
+ (void)setIcon:(id)a0 toWebImageView:(id)a1 isBig:(BOOL)a2;
+ (void)setIcon:(id)a0 toWebImageView:(id)a1 isBig:(BOOL)a2 alwaysTemplate:(BOOL)a3;
+ (void)setIcon:(id)a0 toWebImageView:(id)a1 isBig:(BOOL)a2 alwaysTemplate:(BOOL)a3 error:(id *)a4;
+ (id)sharedIconRenderingQueue;
+ (id)sharedIconRecursiveLock;
+ (id)addFileNamePrefix:(id)a0 toPath:(id)a1;

@end
