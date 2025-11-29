@class NSString;

@interface IESLiveAnchorFunctionInteractEffectHandler : NSObject <IESLiveAnchorFunctionRegisterHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handleInteractIDs;

- (id)getFinalSchemaWithUrl:(id)a0 QueryItems:(id)a1;
- (BOOL)isNormalEffectRunning;
- (BOOL)supportFunctionItem:(id)a0;
- (BOOL)shouldShowFunctionItem:(id)a0 localLiveSceneType:(unsigned long long)a1 interactiveScene:(unsigned long long)a2;
- (BOOL)functionItemIsRunning:(id)a0;
- (void)functionItemDidClick:(id)a0 clickFromButton:(BOOL)a1 params:(id)a2;
- (void)functionItemWillDisplay:(id)a0;
- (void)functionItemDidEndDisplay:(id)a0;
- (void)functionItemDidClickDebugButton:(id)a0;
- (void)trackAnchorInteractiveExtensionSelect:(id)a0 btnType:(id)a1;
- (void)jumpToDetailPageWithItem:(id)a0 baseSchema:(id)a1 running:(BOOL)a2;

@end
