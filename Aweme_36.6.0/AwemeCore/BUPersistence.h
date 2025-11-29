@class NSString, BUPersistenceOption, BUDiskCache;

@interface BUPersistence : NSObject <BUPersistenceProtocol>

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) BUDiskCache *diskCache;
@property (retain, nonatomic) BUPersistenceOption *option;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)persistenceWithName:(id)a0 option:(id)a1;
+ (id)persistenceWithName:(id)a0;
+ (id)commonPersistence;
+ (void)initialize;
+ (id)cacheDirectory;
+ (id)sdkVersion;
+ (void)setSDKVersion:(id)a0;

- (void)_appDidReceiveMemoryWarningNotification;
- (id)_pbu_internal_objectForKey:(id)a0;
- (id)_pbu_internal_objectsForKeys:(id)a0;
- (id)_pbu_internal_allObjects;
- (BOOL)_pbu_internal_setObject:(id)a0 forKey:(id)a1;
- (void)_pbu_internal_updateObjectsForKeys:(id)a0 WithBlock:(id /* block */)a1;
- (BOOL)_pbu_internal_hasObjectForKey:(id)a0;
- (BOOL)_pbu_internal_removeAll;
- (BOOL)_pbu_internal_removeObjectsForKeys:(id)a0;
- (BOOL)_pbu_internal_save;
- (void)allObjectsWithSafeBlock:(id /* block */)a0;
- (void)updateObjectsForKeys:(id)a0 WithBlock:(id /* block */)a1;
- (BOOL)removeObjectsForKeys:(id)a0;
- (id)objectsForKeys:(id)a0;
- (void).cxx_destruct;
- (BOOL)removeAll;
- (id)objectForKey:(id)a0;
- (BOOL)save;
- (id)allObjects;
- (id)initWithName:(id)a0;
- (BOOL)setObject:(id)a0 forKey:(id)a1;
- (BOOL)hasObjectForKey:(id)a0;

@end
