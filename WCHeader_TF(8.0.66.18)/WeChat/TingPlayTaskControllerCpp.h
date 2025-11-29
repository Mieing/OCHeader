@class NSString;

@interface TingPlayTaskControllerCpp : UnitRCObjcBaseProxyClass <TingPlayTaskController>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)playingTask;
- (id)createTask:(id)a0;
- (id)createStandaloneTask:(id)a0;
- (BOOL)destroyStandaloneTask:(id)a0;
- (BOOL)makeTaskGlobal:(id)a0;
- (void)addPlayTaskControllerListener:(id)a0;
- (void)removePlayTaskControllerListener:(id)a0;

@end
