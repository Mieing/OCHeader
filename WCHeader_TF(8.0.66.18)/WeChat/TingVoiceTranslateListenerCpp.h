@class NSString;

@interface TingVoiceTranslateListenerCpp : UnitRCObjcBaseProxyClass <TingVoiceTranslateListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onVoiceTransResultChange:(id)a0 inputId:(int)a1;
- (void)onVoiceTransEnd:(int)a0;
- (void)onVoiceTransTimeout:(int)a0;
- (void)onBeginRecording:(int)a0 errorCode:(int)a1;
- (void)onLevelMeter:(int)a0 peakPower:(float)a1;
- (void)onVoiceDetectSilenceToSpeaking:(int)a0;

@end
