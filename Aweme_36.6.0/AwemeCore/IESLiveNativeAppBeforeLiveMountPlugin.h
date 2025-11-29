@class NSString;
@protocol IESLiveNativeAppPluginContext;

@interface IESLiveNativeAppBeforeLiveMountPlugin : NSObject <IESLiveNativeAppBeforeLiveMountPlugin, IESLiveNativeAppFragmentLifeCycle, IESLiveNativeAppPluginDataStreamHandler> {
    id<IESLiveNativeAppPluginContext> _pluginContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableSceneTypes;

- (id)initWithDIContext:(id)a0 pluginContext:(id)a1;
- (void)cancelMountNativeApp;
- (void)pluginBindServices;
- (void)pluginDidCreate;
- (void)nativeAppShelfInfoDidChange:(id)a0 oldVersion:(id)a1;
- (void)onShelfInfoUpdated:(id)a0;
- (void).cxx_destruct;
- (id)pluginContext;

@end
