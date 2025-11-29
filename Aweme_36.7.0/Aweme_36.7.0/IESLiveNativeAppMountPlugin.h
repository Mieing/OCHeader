@class NSString;
@protocol IESLiveNativeAppPluginContext;

@interface IESLiveNativeAppMountPlugin : NSObject <IESLiveNativeAppMountPlugin, IESLiveNativeAppFragmentLifeCycle, IESLiveNativeAppPluginDataStreamHandler> {
    id<IESLiveNativeAppPluginContext> _pluginContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableSceneTypes;

- (void)nativeAppMountDidFinishForLevel:(long long)a0;
- (id)initWithDIContext:(id)a0 pluginContext:(id)a1;
- (void)mountShelfInfo:(id)a0;
- (void)mountNativeAppInfo:(id)a0;
- (void)removeCurrentMountingDirectlyAndToast:(BOOL)a0 extra:(id)a1;
- (void)unmountNativeAppNeedToast:(BOOL)a0 extra:(id)a1;
- (void)unmountNativeAppNeedToast:(BOOL)a0 extra:(id)a1 complete:(id /* block */)a2;
- (void)cacheMountDataIfNeeded;
- (void)pluginBindServices;
- (void)pluginDidCreate;
- (void)nativeAppShelfInfoDidChange:(id)a0 oldVersion:(id)a1;
- (void)onShelfInfoUpdated;
- (void)mountNativeAppIfNeeded;
- (void).cxx_destruct;
- (id)pluginContext;

@end
