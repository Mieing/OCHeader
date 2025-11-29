@class AWEStorage;
@protocol AWEStorageServiceKVInterface;

@interface AWEStorageFeedBridge : NSObject {
    id<AWEStorageServiceKVInterface> handler;
    AWEStorage *realStorage;
}

- (BOOL)setData:(id)a0 forKey:(id)a1 err:(id *)a2;
- (BOOL)setDictionary:(id)a0 forKey:(id)a1 err:(id *)a2;
- (BOOL)setArray:(id)a0 forKey:(id)a1 err:(id *)a2;
- (BOOL)setString:(id)a0 forKey:(id)a1 err:(id *)a2;
- (BOOL)setURL:(id)a0 forKey:(id)a1 err:(id *)a2;
- (BOOL)setBool:(BOOL)a0 forKey:(id)a1 err:(id *)a2;
- (BOOL)setDouble:(double)a0 forKey:(id)a1 err:(id *)a2;
- (BOOL)setFloat:(float)a0 forKey:(id)a1 err:(id *)a2;
- (BOOL)setInteger:(long long)a0 forKey:(id)a1 err:(id *)a2;
- (BOOL)setObject:(id)a0 forKey:(id)a1 err:(id *)a2;
- (BOOL)removeObjectForKey:(id)a0 err:(id *)a1;
- (id)initWithDomainType:(long long)a0 realStorage:(id)a1;
- (id)feed_userFlagKeyForUserID:(id)a0;
- (long long)feed_userFlag;
- (long long)totalVideoGuideShowedCount;
- (id)todayFirstRecordDate;
- (void)setTodayFirstRecordDate;
- (long long)todayVideoGuideShowedCount;
- (id)todayFirstShowLiveGuideDate;
- (void)setTodayFirstShowLiveGuideDate;
- (long long)todayLiveGuideShowedCount;
- (long long)totalLiveGuideIgnoredCount;
- (BOOL)feed_isUserFlagOn:(long long)a0;
- (void)feed_setUserFlag:(long long)a0;
- (void)feed_clearUserFlag:(long long)a0;
- (void)addVideoGuideShowedCount;
- (void)addTodayVideoGuideShowedCount;
- (void)addTodayLiveGuideShowedCount;
- (void)addLiveGuideIgnoreCount;
- (void)resetLiveGuideIgnoreCount;
- (id)firstIgnoreDate;
- (void)setLiveGuideFirstIgnoreDate;
- (id)handlerWithType:(long long)a0;
- (id)dataForKey:(id)a0;
- (float)floatForKey:(id)a0;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)setString:(id)a0 forKey:(id)a1;
- (void)setData:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void)setArray:(id)a0 forKey:(id)a1;
- (id)dictionaryForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (BOOL)boolForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)URLForKey:(id)a0;
- (void)setURL:(id)a0 forKey:(id)a1;

@end
