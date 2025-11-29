@class NSString;

@interface TingAudioRecorderListenerCpp : UnitRCObjcBaseProxyClass <TingAudioRecorderListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onBuffer:(id)a0;
- (void)onAudioRecorderStarted;

@end
