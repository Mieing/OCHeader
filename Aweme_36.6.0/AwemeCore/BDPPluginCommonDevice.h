@class BDPUniqueID;

@interface BDPPluginCommonDevice : BDPBridgeInstancePlugin

@property (retain, nonatomic) BDPUniqueID *uniqueID;

- (void)userDidTakeScreenshot:(id)a0;
- (void)onUserCaptureScreenWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)offUserCaptureScreenWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
