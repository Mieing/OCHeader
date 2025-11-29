@class NSString;

@interface TingObjcEventCenterCpp : UnitRCObjcBaseProxyClass <TingObjcEventCenter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerListener:(id)a0 eventId:(id)a1;
- (void)unregisterListener:(id)a0;
- (void)fireEvent:(id)a0 data:(id)a1;

@end
