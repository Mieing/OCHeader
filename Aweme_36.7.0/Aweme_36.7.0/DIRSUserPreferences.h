@class NSString;

@interface DIRSUserPreferences : DIRSCacheStore <IRISStore>

@property (copy, nonatomic) NSString *path;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)preferencesWithPath:(id)a0;

- (void)_syncToDisk:(id)a0;
- (void)_load;
- (void).cxx_destruct;
- (BOOL)removeObjectForKey:(id)a0;
- (BOOL)setObject:(id)a0 forKey:(id)a1;

@end
