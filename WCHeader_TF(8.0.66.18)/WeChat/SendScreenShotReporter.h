@class MemoryMappedKV, NSString;

@interface SendScreenShotReporter : MMRootService <MMServiceProtocol>

@property (retain, nonatomic) MemoryMappedKV *snapshotKV;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didTakeScreenShot;
- (void)setupQuickSendEntryViewReport:(id)a0 asset:(id)a1;
- (void)setupQuickSendEntryViewReport:(id)a0 screenShotTime:(double)a1;
- (void)didSendAsset:(id)a0 scene:(long long)a1;
- (void)asyncCheckIsScreenShotAsset:(id)a0 completion:(id /* block */)a1;
- (BOOL)matchWechatSnapshotTime:(id)a0;
- (void).cxx_destruct;

@end
