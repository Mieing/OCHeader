@class NSString, MMKV, NSMutableDictionary;

@interface BDMannorStorageManger : NSObject

@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) NSMutableDictionary *defaults;
@property (retain, nonatomic) NSString *rootDir;

+ (id)defaultMnnorStorageManger;
+ (void)initializeMnnorStorageManger:(id)a0;

- (id)objectOfClass:(Class)a0 forKey:(id)a1;
- (id)initWithSuiteID:(id)a0 rootPath:(id)a1;
- (id)getDefaultObjectOfClass:(Class)a0 forKey:(id)a1;
- (id)initWithSuiteID:(id)a0;
- (id)dataForKey:(id)a0;
- (void)registerDefaults:(id)a0;
- (float)floatForKey:(id)a0;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (BOOL)containsKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)_setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (id)dictionaryForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (void)clearAll;
- (BOOL)boolForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)URLForKey:(id)a0;
- (id)stringArrayForKey:(id)a0;
- (void)setURL:(id)a0 forKey:(id)a1;

@end
