@class NSString;

@interface TingAudioFocusCallbackCpp : UnitRCObjcBaseProxyClass <TingAudioFocusCallback>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onFocusResponse:(int)a0 context:(id)a1;

@end
