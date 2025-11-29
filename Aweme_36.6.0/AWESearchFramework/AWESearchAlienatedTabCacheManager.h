@class NSMutableDictionary;

@interface AWESearchAlienatedTabCacheManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *exitInfoFromAllUsers;
@property (retain, nonatomic) NSMutableDictionary *alienatedTabsFromAllUsers;
@property (retain, nonatomic) NSMutableDictionary *cachedAlienatedTabs;

+ (id)sharedManager;

- (id)exitInfoCacheKeyWithModel:(id)a0;
- (id)exitInfoForModel:(id)a0;
- (void)saveExitInfo:(id)a0 forModel:(id)a1;
- (void)saveAlienatedTabs:(id)a0;
- (void).cxx_destruct;

@end
