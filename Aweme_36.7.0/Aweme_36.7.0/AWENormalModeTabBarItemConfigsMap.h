@class NSMutableDictionary, NSDictionary, NSArray, AWENormalModeTabBarIconDownloadManager, AWENormalModeTabBarItemChannelObject, NSString;

@interface AWENormalModeTabBarItemConfigsMap : NSObject <AWENormalModeTabBarIconDownloadManagerDelegate>

@property (retain, nonatomic) NSMutableDictionary *normalConfigClassesDictionary;
@property (retain, nonatomic) NSMutableDictionary *normalChannelMap;
@property (copy, nonatomic) NSDictionary *tabIDToTabBarItemTypeMap;
@property (copy, nonatomic) NSDictionary *tabBarItemTypeToTabIDMap;
@property (retain, nonatomic) NSArray *bottom2TabWhiteList;
@property (copy, nonatomic) NSArray *itemModels;
@property (retain, nonatomic) NSMutableDictionary *sharedCallSetupMap;
@property (retain, nonatomic) AWENormalModeTabBarIconDownloadManager *tabBarIconDownloadManager;
@property (retain, nonatomic) AWENormalModeTabBarItemChannelObject *rootChannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (void)registerTabBarItemNormalConfigClass:(Class)a0 type:(long long)a1;
- (id)getNormalModeChannelWithTabID:(id)a0;
- (id)getNormalModeButtonCurrentTitleWithTabID:(id)a0;
- (BOOL)normalModeChannelCanHotReloadWithTabID:(id)a0;
- (void)tabBarIconDownloadManager:(id)a0 downloadFinishedWithResult:(id)a1;
- (id)generateRootChannel;
- (id)getItemModelWithItemType:(long long)a0 tabModels:(id)a1;
- (void)setupChannel:(id)a0 withItemModel:(id)a1 itemType:(long long)a2 configClass:(Class)a3 index:(long long)a4;
- (id)p_generateConfigWithChannel:(id)a0 index:(long long)a1;
- (Class)getNormalModeItemConfigRegisterClassWithTabID:(id)a0;
- (id)p_generalButtonWithTabID:(id)a0 respondsToSelector:(SEL)a1;
- (void)reloadChannels;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;

@end
