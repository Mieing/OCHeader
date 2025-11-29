@class NSString;

@interface IESLiveAnchorFunctionNativeAppHandler : NSObject <IESLiveAnchorFunctionRegisterHandler>

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
- (void)handleComponentSwitchIfNeededWithGameItem:(id)a0 completion:(id /* block */)a1;
- (void)_goNativeApp:(id)a0 params:(id)a1;

@end
