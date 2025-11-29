@class NSString;

@interface IESLiveAnchorFunctionInteractGamePlusHandler : NSObject <IESLiveAnchorFunctionRegisterHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handleInteractIDs;

- (id)getFinalSchemaWithUrl:(id)a0 QueryItems:(id)a1;
- (void)trackConflictPopup;
- (long long)runningGamePlusContainerCount;
- (void)reportAnchorFormatMonitor:(id)a0 category_1:(id)a1 category_2:(id)a2 extra:(id)a3;
- (unsigned long long)getRepelStatusTypeWithItem:(id)a0;
- (BOOL)isInteractPluginRunning;
- (BOOL)isOverInteractToolUseLimit;
- (BOOL)supportFunctionItem:(id)a0;
- (BOOL)shouldShowFunctionItem:(id)a0 localLiveSceneType:(unsigned long long)a1 interactiveScene:(unsigned long long)a2;
- (BOOL)functionItemIsRunning:(id)a0;
- (void)functionItemDidClick:(id)a0 clickFromButton:(BOOL)a1 params:(id)a2;
- (void)functionItemWillDisplay:(id)a0;
- (void)functionItemDidEndDisplay:(id)a0;
- (void)handlerInteractGamePlus:(id)a0 clickFromButton:(BOOL)a1 params:(id)a2;
- (void)handlerInteractMiniApp:(id)a0 clickFromButton:(BOOL)a1 params:(id)a2;
- (id)generateUrlCommonParamsWithItem:(id)a0;
- (void)gotoSchema:(id)a0 params:(id)a1;
- (id)getBtnTypeOfSubscribeType:(long long)a0;
- (void)trackAnchorInteractiveExtensionSelect:(id)a0 btnType:(id)a1 extensionType:(id)a2;
- (void)showAlertWith:(unsigned long long)a0;
- (void)gotoMiniAppWithGameItem:(id)a0 params:(id)a1;
- (BOOL)isGamePlusItemRunningWithItem:(id)a0;
- (BOOL)isInteractToolRunning;

@end
