@interface UASDKStorage : NSObject

+ (id)archivedObject:(id)a0;
+ (id)unarchivedObjectWithData:(id)a0 expectedClass:(Class)a1;
+ (id)persistentObjectWithKey:(id)a0 expectedClass:(Class)a1;
+ (id)memoryObjectWithKey:(id)a0;
+ (void)setPersistentObject:(id)a0 withKey:(id)a1;
+ (void)setMemoryObject:(id)a0 withKey:(id)a1;
+ (BOOL)deletePersistentObjectWithKey:(id)a0 expectedClass:(Class)a1;
+ (BOOL)deleteMemoryObjectWithKey:(id)a0;

@end
