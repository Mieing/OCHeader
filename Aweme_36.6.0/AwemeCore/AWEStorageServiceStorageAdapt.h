@class NSString, AWEStorage;

@interface AWEStorageServiceStorageAdapt : AWEStorageServiceAdapt <AWEStorageServiceKVUniversal> {
    AWEStorage *_storage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)universal;

- (id)objectForKey:(id)a0 configuration:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1 configuration:(id)a2;
- (void)removeObjectForKey:(id)a0 configuration:(id)a1;
- (id)stringForKey:(id)a0 configuration:(id)a1;
- (id)arrayForKey:(id)a0 configuration:(id)a1;
- (id)dictionaryForKey:(id)a0 configuration:(id)a1;
- (id)dataForKey:(id)a0 configuration:(id)a1;
- (long long)integerForKey:(id)a0 configuration:(id)a1;
- (void)setInteger:(long long)a0 forKey:(id)a1 configuration:(id)a2;
- (float)floatForKey:(id)a0 configuration:(id)a1;
- (void)setFloat:(float)a0 forKey:(id)a1 configuration:(id)a2;
- (double)doubleForKey:(id)a0 configuration:(id)a1;
- (void)setDouble:(double)a0 forKey:(id)a1 configuration:(id)a2;
- (BOOL)boolForKey:(id)a0 configuration:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1 configuration:(id)a2;
- (id)URLForKey:(id)a0 configuration:(id)a1;
- (void)setURL:(id)a0 forKey:(id)a1 configuration:(id)a2;
- (id)stringArrayForKey:(id)a0 configuration:(id)a1;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0;

@end
