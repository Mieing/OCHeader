@class NSString, MMKV;

@interface IESIMStorage : NSObject <IESIMStorageProtocol>

@property (retain, nonatomic) MMKV *mmkv;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedStorage;

- (float)getFloatForKey:(id)a0;
- (void)enumerateKeys:(id /* block */)a0;
- (id)getObjectOfClass:(Class)a0 forKey:(id)a1;
- (void)removeValuesForKeys:(id)a0;
- (int)getInt32ForKey:(id)a0;
- (double)getDoubleForKey:(id)a0;
- (id)getDateForKey:(id)a0;
- (long long)getInt64ForKey:(id)a0;
- (unsigned long long)actualSize;
- (unsigned int)getUInt32ForKey:(id)a0;
- (unsigned long long)getUInt64ForKey:(id)a0;
- (void)p_trackFailSetWithKey:(id)a0;
- (BOOL)setDouble:(double)a0 forKey:(id)a1;
- (BOOL)containsKey:(id)a0;
- (BOOL)setBool:(BOOL)a0 forKey:(id)a1;
- (BOOL)setString:(id)a0 forKey:(id)a1;
- (BOOL)setData:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (BOOL)setDate:(id)a0 forKey:(id)a1;
- (BOOL)setInt32:(int)a0 forKey:(id)a1;
- (BOOL)setFloat:(float)a0 forKey:(id)a1;
- (BOOL)setUInt64:(unsigned long long)a0 forKey:(id)a1;
- (id)initWithName:(id)a0;
- (BOOL)setObject:(id)a0 forKey:(id)a1;
- (void)removeValueForKey:(id)a0;
- (unsigned long long)count;
- (id)allKeys;
- (unsigned long long)totalSize;
- (BOOL)setUInt32:(unsigned int)a0 forKey:(id)a1;
- (BOOL)setInt64:(long long)a0 forKey:(id)a1;
- (id)getDataForKey:(id)a0;
- (void)clearStore;
- (id)getStringForKey:(id)a0;
- (BOOL)getBoolForKey:(id)a0;

@end
