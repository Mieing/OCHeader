@class NSString;

@interface TingApiNextTapeDelegateCpp : UnitRCObjcBaseProxyClass <TingApiNextTapeDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)couldAutoNextTape;
- (BOOL)couldPlayNextTape;
- (BOOL)hasNextTape;

@end
