@class WCCameraModule, NSString;

@interface WCCameraModuleMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) WCCameraModule *activeModule;
@property (retain, nonatomic) WCCameraModule *interruptionModule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setActive:(BOOL)a0 scene:(long long)a1 listener:(id)a2;
- (void)setActive:(BOOL)a0 scene:(long long)a1 listener:(id)a2 userData:(id)a3;
- (void)changeActiveModule:(id)a0;
- (void)pushInterruptionModule:(id)a0;
- (void)deactiveModule:(id)a0;
- (void)reportInterruptionEvent:(id)a0 oldModule:(id)a1;
- (id)currentActiveModule;
- (void).cxx_destruct;

@end
