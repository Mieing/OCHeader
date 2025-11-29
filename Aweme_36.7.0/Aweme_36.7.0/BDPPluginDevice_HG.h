@class NSString, BDPUniqueID;

@interface BDPPluginDevice_HG : BDPBridgeInstancePlugin <BDPAppInterfaceOrientationChangeMessage>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) id /* block */ setOrientationSuccessCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)interfaceOrientationChange:(id)a0 targetOrientation:(long long)a1 uniqueID:(id)a2;
- (void)getSystemInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)UIScreenCapturedDidChange:(id)a0;
- (id)privacyMaskingWithCommonParams:(id)a0;
- (void)getSystemInfoSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)vibrateShortWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)vibrateLongWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)setKeepScreenOnWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)onUserScreenRecordWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)offUserScreenRecordWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getGeneralInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)adjustSystemInfoToXScreen:(id)a0 task:(id)a1;
- (void)appendInfo:(id)a0 uniqueID:(id)a1;
- (void)getNetworkTypeWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getMemInfoSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getCpuInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getGpuInfoSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getThermalInfoSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)setDeviceOrientationWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
