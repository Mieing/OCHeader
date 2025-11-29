@class IESLiveNativeAppCardEditorViewController, NSString;
@protocol IESLiveNativeAppPluginContext;

@interface IESLiveNativeAppShelfCardPlugin : NSObject <IESLiveNativeAppShelfCardPlugin, IESLiveNativeAppFragmentLifeCycle, IESLiveNativeAppPluginDataStreamHandler, IESLiveNativeAppCardEditorDelegate> {
    id<IESLiveNativeAppPluginContext> _pluginContext;
}

@property (weak, nonatomic) IESLiveNativeAppCardEditorViewController *cardEditorVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableSceneTypes;

- (id)initWithDIContext:(id)a0 pluginContext:(id)a1;
- (void)pluginBindServices;
- (void)pluginDidCreate;
- (void)nativeAppShelfInfoDidChange:(id)a0 oldVersion:(id)a1;
- (void)openFirstCardAbilityIfNeeded;
- (void)handleOpenPlatformTaskBoxByMountParams:(id)a0 payloadString:(id)a1 isFromMissionTab:(BOOL)a2;
- (void)cardEditor:(id)a0 willCancelEditShelfInfo:(id)a1;
- (void)cardEditor:(id)a0 didSaveData:(id)a1;
- (void)updateNativeAppCardStatus:(BOOL)a0 cardIndex:(long long)a1 beforeUpdateBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)openShelfCardEditorVCWithShelfInfo:(id)a0;
- (void)onBeforeLiveDidSaveData:(id)a0;
- (void)onInLiveDidSaveData:(id)a0;
- (void).cxx_destruct;
- (id)pluginContext;

@end
