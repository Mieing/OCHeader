@class NSString;

@interface MegaVideoReddotListenerCpp : UnitRCObjcBaseProxyClass <MegaVideoReddotListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onReddotChanged:(id)a0 newReddotInfo:(id)a1;

@end
