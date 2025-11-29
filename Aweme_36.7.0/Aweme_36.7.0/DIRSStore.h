@class DIRSCacheStore;

@interface DIRSStore : DIRSBasicModule {
    DIRSCacheStore *cache;
    DIRSCacheStore *preferences;
}

+ (id)moduleId;
+ (id)moduleVersion;

- (id)preferencesPath;
- (id)preferences;
- (void).cxx_destruct;
- (id)cache;
- (void)commonInit;

@end
