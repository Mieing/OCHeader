@class AWELeftSideBarNetworkManager, MMKV, NSDictionary, NSMutableDictionary;

@interface AWELeftSideBarRootManager : NSObject

@property (retain, nonatomic) NSDictionary *leftSideBarDynamicCacheData;
@property (retain, nonatomic) AWELeftSideBarNetworkManager *networkManager;
@property (retain, nonatomic) MMKV *mmkv;
@property (nonatomic) BOOL hasLoadDynamicCacheData;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutex;
@property (retain, nonatomic) NSMutableDictionary *cacheDataModels;
@property (readonly, nonatomic) BOOL dynamicDataRequesting;
@property (readonly, nonatomic) BOOL isMergeProfileEnabled;

+ (Class)aAWELeftSideBarCommonAdapterClass;
+ (Class)aAWELeftSideBarDOUYINLiteAdapterClass;
+ (id)sharedInstance;

- (BOOL)leftSideBarCacheDataHasCurrentBusinessId:(id)a0;
- (void)forceRequestLeftSidebarAllModuleDataWithBusinessID:(id)a0;
- (void)tryCacheLeftSideData:(id)a0 userID:(id)a1 traceInfo:(id)a2 type:(unsigned long long)a3;
- (id)aAWELeftSideBarCommonAdapter;
- (BOOL)leftSideCacheDirectoriesHasFile;
- (id)getLeftSideCacheDataWithUserID:(id)a0;
- (void)getLeftSideDynamicDataWithAsync:(BOOL)a0 completion:(id /* block */)a1;
- (id)getLeftSideBarDefaultModel;
- (void)leftSideBarToggleDynamicCacheModel;
- (unsigned long long)notificationShowEnableWithUserId:(id)a0;
- (unsigned long long)feedShowEnableWithUserId:(id)a0;
- (void)requestLeftSidebarDynamicModuleDataWithBusinessIDList:(id)a0 extraParamDict:(id)a1 completion:(id /* block */)a2;
- (void)tryAutoRequestLeftSidebarAllModuleData;
- (id)aAWELeftSideBarDOUYINLiteAdapter;
- (BOOL)shouldUpdateLeftSideBarOnFirstLaunchWithData:(id)a0;
- (BOOL)p_hotSwitchLeftSideModel:(id)a0 needForceSwitch:(BOOL)a1 dataScenes:(unsigned long long)a2;
- (void)markHasUpdateLeftSideBarOnFirstLaunch;
- (void)trackHotSwitchFailWithDataHash:(id)a0 withResult:(long long)a1;
- (void)tryCacheLeftSideData:(id)a0 withUserID:(id)a1 traceInfo:(id)a2 completion:(id /* block */)a3;
- (void)p_requestLeftSidebarAllModuleDataWithTriggerScene:(id)a0 businessID:(id)a1 needFrequency:(BOOL)a2;
- (void)revokeMessageIfNeedWithSideBarModel:(id)a0 traceInfo:(id)a1;
- (void)p_updateEntranceEnableSwitchWithSideBarModel:(id)a0 userId:(id)a1;
- (void)p_safeRemoveAllCacheDataModels;
- (void)p_safeSetCacheDataModel:(id)a0 forKey:(id)a1;
- (void)p_safeRemoveCacheDataModelForKey:(id)a0;
- (void)p_updateMergeProfileSwitchWithSideBarModel:(id)a0;
- (unsigned long long)p_updateNotificationShowSwitchWithSideBarModel:(id)a0 userId:(id)a1;
- (unsigned long long)p_updateFeedShowSwitchWithSideBarModel:(id)a0 userId:(id)a1;
- (id)p_notificationShowEnabledMMKVKey:(id)a0;
- (id)getDefaultSupportTabs;
- (id)p_feedShowEnabledMMKVKey:(id)a0;
- (id)p_safeCacheDataModelForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
