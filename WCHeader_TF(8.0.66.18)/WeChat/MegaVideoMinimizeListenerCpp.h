@class NSString;

@interface MegaVideoMinimizeListenerCpp : UnitRCObjcBaseProxyClass <MegaVideoMinimizeListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onMinimizeStatusChanged:(BOOL)a0;

@end
