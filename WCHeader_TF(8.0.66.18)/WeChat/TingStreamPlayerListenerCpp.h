@class NSString;

@interface TingStreamPlayerListenerCpp : UnitRCObjcBaseProxyClass <TingStreamPlayerListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onTingStreamPlayerStateChanged:(int)a0 event:(int)a1;

@end
