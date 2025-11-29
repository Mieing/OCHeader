@class IESLiveGuideToolBarItem, NSString, IESLiveNativeAppPermissionIntroModel;
@protocol IESLiveNativeAppPluginContext;

@interface IESLiveNativeAppBeforeLiveEntryPlugin : NSObject <IESLiveNativeAppBeforeLiveEntryPlugin, IESLiveNativeAppFragmentLifeCycle, IESLiveNativeAppPluginDataStreamHandler> {
    id<IESLiveNativeAppPluginContext> _pluginContext;
}

@property (retain, nonatomic) IESLiveGuideToolBarItem *timorEntryItem;
@property (retain, nonatomic) IESLiveNativeAppPermissionIntroModel *permissionIntroModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableSceneTypes;

- (id)permissionModel;
- (id)initWithDIContext:(id)a0 pluginContext:(id)a1;
- (void)refreshBeforeLiveTimorEntranceWithStamps:(id)a0;
- (void)updateTimorEntryItem;
- (void)updateTimorEntryButtonDisable:(BOOL)a0;
- (void)removeTimorEntryButton;
- (void)requestPermissionInfoWhenSuccess:(id /* block */)a0;
- (void)pluginBindServices;
- (void)pluginDidCreate;
- (void)addTimorEntryButton;
- (void)checkMountCache;
- (void)rebuildShelfInfo:(id)a0 completion:(id /* block */)a1;
- (void)timorEntryButtonDidClick;
- (void)showManagerVCWithSource:(id)a0;
- (void)showSquareVC;
- (BOOL)isWelfareEntryFull;
- (void).cxx_destruct;
- (id)pluginContext;

@end
