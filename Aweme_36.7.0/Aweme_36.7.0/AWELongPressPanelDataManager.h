@class NSDictionary, MMKV, NSSet;

@interface AWELongPressPanelDataManager : NSObject

@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) NSDictionary *pageScenesAlreadyRequestMap;
@property (retain, nonatomic) NSSet *pageScenesAlreadyRequest;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (id)effectiveListForModernPanel;
+ (BOOL)enableModernLongPressPanelConfigWithSceneIdentifier:(id)a0;

- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)currentSceneIdentifier;
- (BOOL)shouldUseDefaultConfigWithSceneIdentifier:(id)a0;
- (id)effectiveListForOldPanel;
- (BOOL)shouldRequestPanelConfigWithAwemeModel:(id)a0;
- (id)getPanelConfigWithAweme:(id)a0;
- (void)requestPanelConfigWithAwemeModel:(id)a0 completion:(id /* block */)a1;
- (id)mmkvKeyForSceneToDataHashDict;
- (id)panelConfigDefaultDataHash;
- (void)updatePanelConfigWithLastHash:(id)a0 responseModel:(id)a1 sceneIdentifier:(id)a2;
- (void)updatePageScenesAlreadyRequestWithScenes:(id)a0;
- (void)savePanelConfigWithResponseModel:(id)a0 sceneIdentifier:(id)a1;
- (id)mmkvKeyForDataHashSet;
- (id)keyForPageScenesAlreadyRequest;
- (void)preLoadPanelConfigIfNeedWithAwemeModel:(id)a0;
- (id)getDefaultPanelConfigWithAweme:(id)a0;
- (BOOL)enableGeneralConfigWithSceneIdentifier:(id)a0;
- (BOOL)enableOldPanelGenralConfigWithSceneIdentifier:(id)a0;
- (void).cxx_destruct;

@end
