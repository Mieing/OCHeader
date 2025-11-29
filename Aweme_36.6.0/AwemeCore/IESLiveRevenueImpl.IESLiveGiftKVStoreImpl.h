@interface IESLiveRevenueImpl.IESLiveGiftKVStoreImpl : NSObject <IESLiveGiftKVStoreProtocol> {
    void /* unknown type, empty encoding */ cache;
}

+ (id)defaultInstance;

- (void)enumerateKeys:(id /* block */)a0;
- (id)objectOfClass:(Class)a0 forKey:(id)a1;
- (id)objectOfClass:(Class)a0 withExpireTimeCheckForKey:(id)a1;
- (int)int32ForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 duration:(double)a2;
- (void)setObject:(id)a0 forKey:(id)a1 untilDate:(id)a2;
- (void)migrateBool:(BOOL)a0 forKey:(id)a1;
- (void)migrateObject:(id)a0 forKey:(id)a1;
- (id)dataForKey:(id)a0;
- (float)floatForKey:(id)a0;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)setString:(id)a0 forKey:(id)a1;
- (void)setData:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setDate:(id)a0 forKey:(id)a1;
- (void)setInt32:(int)a0 forKey:(id)a1;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (id)init;
- (BOOL)boolForKey:(id)a0;
- (BOOL)containsObjectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (id)initWithName:(id)a0;
- (double)doubleForKey:(id)a0;
- (id)dateForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setInt64:(long long)a0 forKey:(id)a1;
- (long long)int64ForKey:(id)a0;
- (void)clearStore;

@end
