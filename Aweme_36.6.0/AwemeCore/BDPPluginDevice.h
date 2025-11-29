@class BDPScreenOnLock, BDPThreadSafeDictionary, NSString, BDPUniqueID;

@interface BDPPluginDevice : BDPBridgeInstancePlugin <MFMessageComposeViewControllerDelegate, BDPModelExtensionMessage, BDPWarmBootMessage>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPScreenOnLock *screenOnLock;
@property (retain, nonatomic) BDPThreadSafeDictionary *phoneCallBlocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (void)modelExtensionUpdate:(id)a0;
- (void)getSystemInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)UIScreenCapturedDidChange:(id)a0;
- (void)operateUserScreenRecord:(BOOL)a0 callback:(id /* block */)a1 instance:(id)a2;
- (BOOL)isPageConfigConatinsCertainExt:(id)a0;
- (void)operateUserScreenRecordV2:(BOOL)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)_makePhoneCallWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)_makePhoneCallDirectlyWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getPhoneCallSecretPopupSchema:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)getGeneralInfoProcessWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2 clueForm:(BOOL)a3;
- (id)privacyMaskingWithCommonParams:(id)a0;
- (id)decryptString:(id)a0 key:(id)a1 iv:(id)a2;
- (void)makePhoneCallWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getSystemInfoSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)vibrateShortWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)vibrateLongWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)setKeepScreenOnWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)onUserScreenRecordWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)offUserScreenRecordWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)sendSmsWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)disableUserScreenRecordWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)enableUserScreenRecordWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getDeviceInfoSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getScreenRecordingStateSyncWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getGeneralInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getGeneralInfoForClueFormWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)messageComposeViewController:(id)a0 didFinishWithResult:(long long)a1;

@end
