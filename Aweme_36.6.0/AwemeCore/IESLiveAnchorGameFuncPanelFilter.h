@class NSString;

@interface IESLiveAnchorGameFuncPanelFilter : NSObject <IESLiveAnchorGameFuncPanelFilter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)filterGameListModel:(id)a0 completion:(id /* block */)a1;
- (id)filterGameModelsInCurrentScene:(id)a0;
- (id)filterRecentlyUsedGameModels:(id)a0 validGameModels:(id)a1;
- (id)filterRecentlyUsedGameModels:(id)a0 maxCount:(long long)a1;
- (void)p_processInteractiveList:(id)a0 completion:(id /* block */)a1;
- (id)p_sortByRankWithGameModels:(id)a0;
- (id)p_filterMiniPluginGameModelListInCurrentScene:(id)a0;

@end
