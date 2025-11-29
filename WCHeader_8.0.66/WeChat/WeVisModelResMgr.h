@class NSString;

@interface WeVisModelResMgr : MMUserService <MMResourceMgrExt, MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)checkModelConfig;
- (void)onServiceInit;
- (void)onServiceClearData;

@end
