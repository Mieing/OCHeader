@class NSString, BUPersistenceOption;
@protocol BUPersistenceProtocol;

@interface BUDiskCache : NSObject <BUPersistenceProtocol>

@property (retain, nonatomic) BUPersistenceOption *option;
@property (retain, nonatomic) id<BUPersistenceProtocol> storage;
@property (copy, nonatomic) NSString *diskCacheDirectory;
@property (nonatomic) BOOL memoryWarning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)removeDiskCache;
+ (id)cachePath;

- (void)initDirectory;
- (void)initStorage:(id)a0;
- (id)storageWithName:(id)a0 type:(unsigned long long)a1;
- (void)setCustomStorage:(id)a0;
- (id)initWithName:(id)a0 option:(id)a1;
- (void)allObjectsWithSafeBlock:(id /* block */)a0;
- (void)updateObjectsForKeys:(id)a0 WithBlock:(id /* block */)a1;
- (void)onMemoryWarning;
- (BOOL)removeObjectsForKeys:(id)a0;
- (id)objectsForKeys:(id)a0;
- (void).cxx_destruct;
- (BOOL)removeAll;
- (id)objectForKey:(id)a0;
- (BOOL)save;
- (id)allObjects;
- (BOOL)setObject:(id)a0 forKey:(id)a1;
- (BOOL)hasObjectForKey:(id)a0;

@end
