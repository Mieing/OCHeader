@class NSString;

@interface CommonWCNewAudioModuleManagerCpp : UnitRCObjcBaseProxyClass <CommonWCNewAudioModuleManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (BOOL)activateModule:(id)a0 listener:(id)a1 platformConfig:(id)a2;
- (BOOL)deactivateModule:(id)a0;
- (BOOL)activateMixModule:(id)a0 listener:(id)a1;
- (BOOL)deactivateMixModule:(id)a0;
- (BOOL)canSetActive:(id)a0;
- (id)currentActiveModules;
- (BOOL)isAudioModuleActive:(id)a0;
- (id)currentInterruptModules;
- (BOOL)isAudioModuleInterrupt:(id)a0;
- (void)onSystemAudioSessionInterrupted;
- (void)onSystemAudioSessionInterruptEnd:(BOOL)a0;

@end
