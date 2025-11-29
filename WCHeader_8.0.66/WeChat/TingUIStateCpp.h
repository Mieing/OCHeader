@class NSString;

@interface TingUIStateCpp : UnitRCObjcBaseProxyClass <TingUIState>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)create:(id)a0 info:(id)a1;

- (id)uuid;
- (void)setPlayTask:(id)a0;
- (id)getPlayTask;
- (void)setStateInfo:(id)a0;
- (id)getStateInfo;

@end
