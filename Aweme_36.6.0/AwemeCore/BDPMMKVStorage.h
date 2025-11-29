@class NSString, MMKV;

@interface BDPMMKVStorage : NSObject <BDPKVInterface>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) MMKV *mmkv;
@property (nonatomic) BOOL closed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)enumerateKeys:(id /* block */)a0;
- (id)getObjectOfClass:(Class)a0 forKey:(id)a1;
- (int)getInt32ForKey:(id)a0;
- (double)getDoubleForKey:(id)a0;
- (long long)getInt64ForKey:(id)a0;
- (int)limitSize;
- (int)storageSizeInBytes;
- (id)initWithStorageID:(id)a0 rootPath:(id)a1;
- (id)_getObjectOfClass:(Class)a0 forKey:(id)a1;
- (BOOL)_setObject:(id)a0 forKey:(id)a1 error:(id *)a2;
- (BOOL)updateStorageSize:(int)a0;
- (BOOL)dropStorage;
- (int)_getValueSizeForKey:(id)a0;
- (BOOL)setObject:(id)a0 forKey:(id)a1 error:(id *)a2;
- (BOOL)setDouble:(double)a0 forKey:(id)a1;
- (BOOL)containsKey:(id)a0;
- (BOOL)setBool:(BOOL)a0 forKey:(id)a1;
- (void)close;
- (BOOL)_setObject:(id)a0 forKey:(id)a1;
- (BOOL)isClosed;
- (void).cxx_destruct;
- (BOOL)setInt32:(int)a0 forKey:(id)a1;
- (BOOL)removeAllObjects;
- (unsigned long long)type;
- (BOOL)removeObjectForKey:(id)a0;
- (BOOL)setObject:(id)a0 forKey:(id)a1;
- (BOOL)_removeObjectForKey:(id)a0;
- (id)allKeys;
- (BOOL)setInt64:(long long)a0 forKey:(id)a1;
- (unsigned long long)getCount;
- (BOOL)getBoolForKey:(id)a0;

@end
