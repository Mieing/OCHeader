@class IESLiveAnchorGameFuncPanelCache, NSArray, NSDictionary, NSString, IESLiveAnchorGameFuncPanelAPI;

@interface IESLiveAnchorGameFuncPanelViewStore : NSObject <IESLiveAnchorGameFuncPanelViewStore>

@property (retain, nonatomic) IESLiveAnchorGameFuncPanelAPI *api;
@property (nonatomic) BOOL fetchInteractiveGameListSuccessed;
@property (copy, nonatomic) NSDictionary *groupPropertyDic;
@property (copy, nonatomic) NSArray *groupOrderArr;
@property (copy, nonatomic) NSArray *sectionOrderArr;
@property (copy, nonatomic) NSArray *gameModels;
@property (copy, nonatomic) NSArray *gameModelsInCurrentScene;
@property (copy, nonatomic) NSString *interactEntranceHash;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) IESLiveAnchorGameFuncPanelCache *cache;
@property (nonatomic) long long selectedGroup;
@property (nonatomic) BOOL hasPreviewGameModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)loadCacheInteractiveGameListWithCompletion:(id /* block */)a0;
- (void)asyncLoadCacheInteractiveGameListWithCompletion:(id /* block */)a0;
- (void)fetchInteractiveGameListWithCompletion:(id /* block */)a0 source:(id)a1;
- (void)updateInteractiveGameListWithCompletion:(id /* block */)a0 source:(id)a1;
- (void)updateScene:(unsigned long long)a0;
- (void)p_handleLoadCacheInteractiveGameList:(id)a0 completion:(id /* block */)a1;
- (void)p_handleFetchInteractiveGameList:(id)a0 completion:(id /* block */)a1;
- (void)p_handleUpdateInteractiveGameList:(id)a0 completion:(id /* block */)a1;
- (void)updateHasPreviewGameModel;
- (void)updateInteractToolDetailScheme;
- (void).cxx_destruct;

@end
