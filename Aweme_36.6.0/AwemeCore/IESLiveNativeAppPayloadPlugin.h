@class NSString;
@protocol IESLiveNativeAppPluginContext;

@interface IESLiveNativeAppPayloadPlugin : NSObject <IESLiveNativeAppPayloadPlugin, IESLiveNativeAppFragmentLifeCycle, IESLiveNativeAppPluginDataStreamHandler> {
    id<IESLiveNativeAppPluginContext> _pluginContext;
}

@property (nonatomic) BOOL isCommerceStarMounting;
@property (nonatomic) BOOL isShootFromOpenPlatformTaskBox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableSceneTypes;

- (void)handleSourceParams;
- (id)initWithDIContext:(id)a0 pluginContext:(id)a1;
- (void)updatePayloadToGuideModelWithShelfInfo:(id)a0 isAppend:(BOOL)a1;
- (void)pluginBindServices;
- (void)pluginDidCreate;
- (void)appendRoomCreateParams;
- (void).cxx_destruct;
- (id)pluginContext;

@end
