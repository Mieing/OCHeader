@class NSMapTable, XPlayNetworkTask, XPlaySceneConfig;

@interface XPlayBootLoaderManager : NSObject

@property (retain, nonatomic) XPlaySceneConfig *sceneConfig;
@property (retain, nonatomic) XPlayNetworkTask *preConnectNetworkTask;
@property (retain, nonatomic) XPlayNetworkTask *networkTask;
@property (nonatomic) BOOL didPreload;
@property (retain, nonatomic) NSMapTable *allItemsMap;
@property (nonatomic) long long maxInstanceCount;

+ (id)sharedManager;

- (void)loadPlayItemWithConfiguration:(id)a0 callback:(id /* block */)a1;
- (void)preloadSceneWithConfig:(id)a0;
- (void)addItem:(id)a0 withId:(id)a1;
- (void)destroyItemWithId:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
