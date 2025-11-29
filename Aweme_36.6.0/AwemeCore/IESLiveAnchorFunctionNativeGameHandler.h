@class NSString;

@interface IESLiveAnchorFunctionNativeGameHandler : NSObject <IESLiveAnchorFunctionRegisterHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handleInteractIDs;

- (id)commonTrackParams:(id)a0;
- (BOOL)supportFunctionItem:(id)a0;
- (BOOL)shouldShowFunctionItem:(id)a0 localLiveSceneType:(unsigned long long)a1 interactiveScene:(unsigned long long)a2;
- (BOOL)functionItemIsRunning:(id)a0;
- (void)functionItemDidClick:(id)a0 clickFromButton:(BOOL)a1 params:(id)a2;
- (void)functionItemWillDisplay:(id)a0;
- (void)resolveItemTrack:(id)a0;
- (void)handleComponentSwitchIfNeededWithGameItem:(id)a0 completion:(id /* block */)a1;
- (id)getSourceFromItem:(id)a0;
- (void)trackGameClick:(id)a0;
- (void)resolveExtraIfNeed:(id)a0;
- (id)introductionSource:(id)a0;
- (void)trackGameShow:(id)a0;
- (void)trackWithName:(id)a0 item:(id)a1 params:(id)a2;

@end
