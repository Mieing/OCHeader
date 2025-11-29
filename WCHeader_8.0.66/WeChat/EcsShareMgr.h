@class NSString;

@interface EcsShareMgr : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)showEcsShareDialogInView:(id)a0 menuItemLine1:(id)a1 menuItemLine2:(id)a2 sourceReportData:(id)a3 callback:(id)a4;
- (id)genEncryptUserName:(id)a0;
- (id)genDecryptUserName:(id)a0;
- (void)share:(id)a0 withExtraData:(id)a1 toEncryptUserNames:(id)a2 callback:(id)a3 fromView:(id)a4;

@end
