@class NSDictionary, NSMutableDictionary, NSArray;

@interface AWETeenModeTabBarItemConfigsMap : NSObject

@property (retain, nonatomic) NSMutableDictionary *teenConfigClassesDictionary;
@property (retain, nonatomic) NSMutableDictionary *teenModeChannelMap;
@property (copy, nonatomic) NSDictionary *tabIDToTabBarItemTypeMap;
@property (copy, nonatomic) NSDictionary *tabBarItemTypeToTabIDMap;
@property (retain, nonatomic) NSArray *bottom2TabWhiteList;
@property (retain, nonatomic) NSMutableDictionary *sharedCallSetupMap;

+ (id)sharedMap;

- (id)getChannelWithType:(id)a0;
- (id)getTabIdWithTabBarItemType:(long long)a0;
- (id)getChannelWithTabID:(id)a0;
- (BOOL)validateTabBarItemType:(long long)a0;
- (void)p_initItemConfigWithConfigClass:(Class)a0 channel:(id)a1;
- (void)enumerateAllChannelsUsingBlock:(id /* block */)a0;
- (id)getChannelInAllStateWithType:(id)a0;
- (void)removeChannelWithType:(id)a0;
- (id)getTabBarItemConfigWithTabid:(id)a0;
- (id)generateTabBarItemTypesWithTabIDList:(id)a0;
- (id)tabIDWhiteList;
- (void)registerTabBarItemTeenConfigClass:(Class)a0 type:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;

@end
