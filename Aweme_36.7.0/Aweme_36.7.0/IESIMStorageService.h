@class NSString;

@interface IESIMStorageService : HTSService <IESIMStorageService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)storageWithDomain:(id)a0;
- (BOOL)setDictionary:(id)a0 forKey:(id)a1 err:(id *)a2;
- (BOOL)setArray:(id)a0 forKey:(id)a1 err:(id *)a2;
- (BOOL)setObject:(id)a0 forKey:(id)a1 err:(id *)a2;
- (BOOL)removeObjectForKey:(id)a0 err:(id *)a1;
- (id)dataForKey:(id)a0;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)setString:(id)a0 forKey:(id)a1;
- (void)setData:(id)a0 forKey:(id)a1;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void)setArray:(id)a0 forKey:(id)a1;
- (id)dictionaryForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
