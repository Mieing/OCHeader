@class NSString;

@interface TingAudioModuleListenerCpp : UnitRCObjcBaseProxyClass <TingAudioModuleListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAudioModuleInterruptBegin:(int)a0 extraData:(id)a1;

@end
