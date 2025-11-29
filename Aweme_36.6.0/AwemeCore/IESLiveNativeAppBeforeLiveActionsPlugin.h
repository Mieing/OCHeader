@class NSString;
@protocol IESLiveNativeAppPluginContext;

@interface IESLiveNativeAppBeforeLiveActionsPlugin : NSObject <IESLiveNativeAppBeforeLiveActionsPlugin, IESLiveNativeAppFragmentLifeCycle, IESLiveNativeAppPluginDataStreamHandler, IESLiveGuideShopEntryAction, IESLiveGuideLocalLifeAction, IESLiveCommercialComponentsActions, IESLiveGuideWelfareEntryAction, IESLiveGuideActions, IESLiveGuideSourceParamsEvent> {
    id<IESLiveNativeAppPluginContext> _pluginContext;
}

@property (nonatomic) unsigned long long curLiveType;
@property (nonatomic) unsigned long long curUsingItemType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableSceneTypes;

- (void)willSwitchToCommercialComponent:(unsigned long long)a0;
- (void)willRemoveCommercialComponent:(unsigned long long)a0;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)willStartLive;
- (void)goodsDidChangeWithEmpty:(BOOL)a0;
- (void)localLifeChangeWithEmpty:(BOOL)a0;
- (void)openLiveModelDidUpdate:(id)a0;
- (BOOL)isShopEntryFull;
- (void)guideWelfareModelDidChange;
- (void)nativeAppMount;
- (id)initWithDIContext:(id)a0 pluginContext:(id)a1;
- (id)curLiveTypeString;
- (BOOL)isItemOn:(unsigned long long)a0;
- (void)sourceParamsDidUpdated;
- (void)pluginBindServices;
- (void)pluginDidCreate;
- (void)makeItem:(unsigned long long)a0 toOn:(BOOL)a1;
- (void).cxx_destruct;
- (id)pluginContext;

@end
