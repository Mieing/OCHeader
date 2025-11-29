@class NSString;

@interface WCUpdateMgr : MMRootService <MMServiceProtocol, MMKernelExt, IMMLanguageMgrExt, IExptServiceExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)registerExtension;
- (void)registerUpdate:(unsigned long long)a0;
- (void)exitForUpdateRevokeBackground;
- (void)exitForNewUpdateBackground;
- (void)exitForNewUpdateSuspend;
- (void)onAuthOKWithPlistVesionChangeFrom:(unsigned int)a0 to:(unsigned int)a1;
- (void)onLanguageChange;
- (void)onExptItemListChange;
- (void)dummy;

@end
