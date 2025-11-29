@interface AWECommentSwiftService.CommentStorageService : NSObject <AWECommentStorageServiceProtocol> {
    void /* unknown type, empty encoding */ storageValue;
    void /* unknown type, empty encoding */ cacheConcurrentQueue;
    void /* unknown type, empty encoding */ dataBaseConcurrentQueue;
}

- (void)setResourcePathInCache:(id)a0 forKey:(id)a1;
- (id)resourcePathInCacheForKey:(id)a0;
- (id)dataForKey:(id)a0;
- (float)floatForKey:(id)a0;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (BOOL)setBool:(BOOL)a0 forKey:(id)a1;
- (void)setString:(id)a0 forKey:(id)a1;
- (void)setData:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void)setArray:(id)a0 forKey:(id)a1;
- (id)dictionaryForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (id)init;
- (BOOL)boolForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)URLForKey:(id)a0;
- (void)setURL:(id)a0 forKey:(id)a1;

@end
