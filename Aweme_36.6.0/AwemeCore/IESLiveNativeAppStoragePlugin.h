@class NSString, IESLiveNativeAppStorageDataModel;
@protocol IESLiveAnchorGameNativeAPPStorageHelper, IESLiveNativeAppPluginContext;

@interface IESLiveNativeAppStoragePlugin : NSObject <IESLiveNativeAppStoragePlugin, IESLiveNativeAppFragmentLifeCycle, IESLiveNativeAppPluginDataStreamHandler> {
    id<IESLiveNativeAppPluginContext> _pluginContext;
}

@property (retain, nonatomic) id<IESLiveAnchorGameNativeAPPStorageHelper> storageHelper;
@property (retain, nonatomic) IESLiveNativeAppStorageDataModel *dataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableSceneTypes;

- (id)initWithDIContext:(id)a0 pluginContext:(id)a1;
- (void)requestMemoryStatus:(id /* block */)a0;
- (void)pluginBindServices;
- (void)pluginDidCreate;
- (void).cxx_destruct;
- (id)pluginContext;

@end
