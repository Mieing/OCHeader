@class UILabel, NSString;
@protocol IESLiveNativeAppPluginContext;

@interface IESLiveNativeAppDebugPlugin : NSObject <IESLiveNativeAppDebugPlugin, IESLiveNativeAppFragmentLifeCycle, IESLiveNativeAppPluginDataStreamHandler> {
    id<IESLiveNativeAppPluginContext> _pluginContext;
}

@property (retain, nonatomic) UILabel *screenCaptureDebugHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableSceneTypes;

- (void)nativeAppUnmount;
- (id)initWithDIContext:(id)a0 pluginContext:(id)a1;
- (void)pluginBindServices;
- (void)pluginDidCreate;
- (BOOL)_debug_enableShowScreenCaptureStatusHint;
- (void)_debug_onScreenCaptureStatusChanged:(id)a0;
- (void).cxx_destruct;
- (id)pluginContext;

@end
