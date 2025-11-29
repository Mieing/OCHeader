@class NSString;

@interface TingApiShutdownControllerCpp : UnitRCObjcBaseProxyClass <TingApiShutdownController>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)getShutdownType;
- (unsigned long long)getShutdownMinLater;
- (unsigned long long)getShutdownTargetTimeMs;
- (void)setShutdown:(int)a0 minLater:(unsigned long long)a1;
- (void)addShutdownListener:(id)a0;
- (void)removeShutdownListener:(id)a0;

@end
