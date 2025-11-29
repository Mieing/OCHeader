@class AWEKVStorageHandlerConfiguration, NSString;
@protocol AWEStorageServiceKVUniversal;

@interface AWEStorageServiceKVHandler : AWEStorageServiceHandler <AWEStorageServiceKVInterface>

@property (retain, nonatomic) AWEKVStorageHandlerConfiguration *config;
@property (retain, nonatomic) id<AWEStorageServiceKVUniversal> defaultStorage;
@property (retain, nonatomic) id<AWEStorageServiceKVUniversal> backupStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)universalStorageHandler;

- (id)objectForKey:(id)a0 withOptions:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1 withOptions:(id)a2;
- (void)removeObjectForKey:(id)a0 withOptions:(id)a1;
- (id)stringForKey:(id)a0 withOptions:(id)a1;
- (id)arrayForKey:(id)a0 withOptions:(id)a1;
- (id)dictionaryForKey:(id)a0 withOptions:(id)a1;
- (id)dataForKey:(id)a0 withOptions:(id)a1;
- (long long)integerForKey:(id)a0 withOptions:(id)a1;
- (void)setInteger:(long long)a0 forKey:(id)a1 withOptions:(id)a2;
- (float)floatForKey:(id)a0 withOptions:(id)a1;
- (void)setFloat:(float)a0 forKey:(id)a1 withOptions:(id)a2;
- (double)doubleForKey:(id)a0 withOptions:(id)a1;
- (void)setDouble:(double)a0 forKey:(id)a1 withOptions:(id)a2;
- (BOOL)boolForKey:(id)a0 withOptions:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1 withOptions:(id)a2;
- (id)URLForKey:(id)a0 withOptions:(id)a1;
- (void)setURL:(id)a0 forKey:(id)a1 withOptions:(id)a2;
- (id)initWithDomain:(id)a0 options:(id)a1;
- (void)storageHandlerConfiguration:(id)a0;
- (void)setupStorageHandlerStorage:(id)a0;
- (id)updateKey:(id)a0 withConfig:(id)a1;
- (void)updateMetaDataIfNeeded:(id)a0 key:(id)a1 type:(int)a2 backup:(BOOL)a3 size:(long long)a4;
- (void)removeMetaDataForKey:(id)a0;
- (void)bothMemoryAndDiskStorageHandler:(id)a0;
- (void)diskStorageHandler:(id)a0;
- (void)memoryStorageHandler:(id)a0;
- (BOOL)needBackupStorage:(id)a0;
- (id)dataForKey:(id)a0;
- (float)floatForKey:(id)a0;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (id)initWithDomain:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (BOOL)boolForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)URLForKey:(id)a0;
- (id)metaDataForKey:(id)a0;
- (void)setURL:(id)a0 forKey:(id)a1;
- (BOOL)isValidNumber:(id)a0;

@end
