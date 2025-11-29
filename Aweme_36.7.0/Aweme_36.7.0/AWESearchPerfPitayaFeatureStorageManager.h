@class NSMutableDictionary;

@interface AWESearchPerfPitayaFeatureStorageManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *storage;

+ (void)addLag:(id)a0 forSearchId:(id)a1;
+ (void)addSlide:(id)a0 forSearchId:(id)a1;
+ (id)fetchLatestLagWithCountLimit:(long long)a0 forSearchId:(id)a1;
+ (id)fetchLatestSlideForSearchId:(id)a0;
+ (id)manager;

- (void)p_addLag:(id)a0 forSearchId:(id)a1;
- (void)p_addSlide:(id)a0 forSearchId:(id)a1;
- (id)p_fetchLatestSlideForSearchId:(id)a0;
- (id)p_fetchLatestLagWithCountLimit:(long long)a0 forSearchId:(id)a1;
- (BOOL)canAddInfo;
- (void)p_addInfo:(id)a0 forStorageKey:(id)a1 andUniqueId:(id)a2 sortComparator:(id /* block */)a3;
- (long long)p_countLimitForKey:(id)a0;
- (id)p_identifierForName:(id)a0 andUniqueId:(id)a1;
- (id)p_relationBetweenCountLimitAndStorageKey;
- (id)p_fetchInfoWithCountLimit:(long long)a0 forStorageKey:(id)a1 andUniqueId:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
