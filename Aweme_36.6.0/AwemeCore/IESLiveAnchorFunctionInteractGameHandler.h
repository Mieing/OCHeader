@class NSString;

@interface IESLiveAnchorFunctionInteractGameHandler : NSObject <IESLiveAnchorFunctionRegisterHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handleInteractIDs;

- (BOOL)supportFunctionItem:(id)a0;
- (BOOL)shouldShowFunctionItem:(id)a0 localLiveSceneType:(unsigned long long)a1 interactiveScene:(unsigned long long)a2;
- (BOOL)functionItemIsRunning:(id)a0;
- (void)functionItemDidClick:(id)a0 clickFromButton:(BOOL)a1 params:(id)a2;
- (void)functionItemWillDisplay:(id)a0;
- (void)functionItemDidEndDisplay:(id)a0;
- (void)resolveItemTrack:(id)a0;
- (void)trackGameItemShow:(id)a0;
- (void)trackGameItemDidClick:(id)a0;
- (void)_goInteractGame:(id)a0 params:(id)a1;
- (void)showSwitchGameAlert:(id)a0 description:(id)a1 action:(id /* block */)a2;
- (void)handleComponentSwitchIfNeededWithGameItem:(id)a0 completion:(id /* block */)a1;
- (id)interactGameItemClickStatusType:(id)a0;
- (id)getSourceFromItem:(id)a0;

@end
