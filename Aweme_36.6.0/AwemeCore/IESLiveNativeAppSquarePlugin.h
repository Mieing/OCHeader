@class NSString, UIViewController;
@protocol IESHYControllerProtocol, IESLiveNativeAppPluginContext;

@interface IESLiveNativeAppSquarePlugin : NSObject <IESLiveNativeAppSquarePlugin, IESLiveNativeAppFragmentLifeCycle, IESLiveNativeAppPluginDataStreamHandler> {
    id<IESLiveNativeAppPluginContext> _pluginContext;
}

@property (weak, nonatomic) UIViewController<IESHYControllerProtocol> *squareLynxVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableSceneTypes;

- (id)initWithDIContext:(id)a0 pluginContext:(id)a1;
- (void)pluginBindServices;
- (void)pluginDidCreate;
- (void)showNativeAppSquareVCWithSource:(id)a0;
- (void)dismissNativeAppSquareVC:(id /* block */)a0;
- (BOOL)isShowingSquareVC;
- (BOOL)isSquareVCShowingNextVC;
- (void)dismissToNativeAppSquareVC:(id /* block */)a0;
- (id)realSquareVC;
- (void)openSquareLynxVC;
- (void)closeSquareLynxVC;
- (id)generateSquareLynxSchema;
- (void)updateMountPermissionIfNeeded;
- (void).cxx_destruct;
- (id)pluginContext;

@end
