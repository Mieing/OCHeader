@class NSString;

@interface IESLiveAnchorFunctionGameHandler : NSObject <IESLiveAnchorFunctionRegisterHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handleInteractIDs;

- (void)_goProphet:(id)a0 params:(id)a1;
- (BOOL)supportFunctionItem:(id)a0;
- (BOOL)shouldShowFunctionItem:(id)a0 localLiveSceneType:(unsigned long long)a1 interactiveScene:(unsigned long long)a2;
- (BOOL)functionItemIsRunning:(id)a0;
- (void)functionItemDidClick:(id)a0 clickFromButton:(BOOL)a1 params:(id)a2;
- (void)functionItemWillDisplay:(id)a0;
- (void)functionItemDidEndDisplay:(id)a0;
- (void)_goWGameX:(id)a0 params:(id)a1;
- (void)_goAnchorPlayTogether:(id)a0 params:(id)a1;

@end
