@class NSString;
@protocol AWEShowBottomButtonSceneConfigProtocol;

@interface AWEShowBottomButtonTemplateScene : NSObject <AWEShowBottomButtonSceneProtocol>

@property (retain, nonatomic) id<AWEShowBottomButtonSceneConfigProtocol> config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneWillActivate;
- (void)sceneDidActivate;
- (void)sceneWillDeactivate;
- (void)sceneDidDeactivate;
- (Class)safeLeftRegisteredPluginClasses;
- (void)safeDidRegisterPlugin:(id)a0;
- (Class)safeRightRegisteredPluginClasses;
- (unsigned long long)safeLeftPluginType;
- (id)safeLeftButtonConfig;
- (unsigned long long)safeRightPluginType;
- (id)safeRightButtonConfig;
- (void)safeWillUnregisterPlugin:(id)a0;
- (void).cxx_destruct;
- (id)sceneID;
- (id)initWithConfig:(id)a0;

@end
