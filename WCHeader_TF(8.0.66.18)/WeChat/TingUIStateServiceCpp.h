@class NSString;

@interface TingUIStateServiceCpp : UnitRCObjcBaseProxyClass <TingUIStateService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getAllStateId;
- (id)getAllStateList;
- (id)getState:(id)a0;
- (void)appendState:(id)a0;
- (void)removeState:(id)a0;

@end
