@class NSString;

@interface WXGRoamDeviceAddPCHalfView : MMPageSheetBaseView <IRoamBackupPackageServiceExt, IRoamOutBoxServiceExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEnterScene:(long long)a0;
- (void)setupDetailView:(long long)a0;
- (void)scan;
- (void)showFileMgr;
- (void)onRoamBackupPackageServiceDeviceAddComplete;
- (void)onRoamOutBoxServiceFinishCreateBackupMenu:(BOOL)a0 dirURL:(id)a1 deviceId:(id)a2;

@end
