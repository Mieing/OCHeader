@class NSString, NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWEShortcutManager : NSObject <AWEDeepLinkWorkFlowServiceDelegate, AWEUserMessage, AWEUGDataCollectionSettingsProtocol> {
    NSMutableArray *_shortcutConfigList;
    long long _shortcutConfigSource;
}

@property (copy, nonatomic) NSDictionary *shortcutIDIconNameDict;
@property (retain, nonatomic) NSMutableArray *shortcutConfigList;
@property (nonatomic) long long shortcutConfigSource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (copy, nonatomic) NSString *advertisingGDLabel;
@property (copy, nonatomic) NSDictionary *cacheDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterStaticLoad;
+ (Class)aAWEShortcutCommonAdapterClass;
+ (id)injectUndertakingRequestBizParams;
+ (id)sharedManager;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)notifyPreLoadTaskExecute:(id)a0;
- (void)register3DTouchShortcuts;
- (id)getConfigWithType:(id)a0;
- (id)staticAddShortcutItems;
- (void)updateShortcutItemsUsingNetwork:(id)a0 forceUpdate:(BOOL)a1 updateSource:(long long)a2;
- (long long)priorityForSource:(long long)a0;
- (void)sortShortcutConfigUsingRank;
- (id)dynamicAddShortcutItems;
- (void)fetchAndUpdateShortcutConfig:(id)a0 forceUpdate:(BOOL)a1 completion:(id /* block */)a2;
- (id)aAWEShortcutCommonAdapter;
- (void)handleFetchedData:(id)a0 forceUpdate:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)shouldUpdateShortcutConfigWithCache:(id)a0 forceRefresh:(BOOL)a1;
- (void)saveToCache:(id)a0;
- (BOOL)isCacheExpired:(id)a0;
- (void)setadvertisingGDLabel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clearCache;
- (id)loadCache;

@end
