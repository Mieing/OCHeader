@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AWENetworkCommonParamsQuickBuffer : NSObject <AWEUserMessage, AWEDigitalWellbeingMessage, AWEBasicModeMessage>

@property (nonatomic) BOOL p_teensMode;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (nonatomic) BOOL privacyAlertAgree;
@property (nonatomic) BOOL privacyAlertAgreeAndNotBaicMode;
@property (nonatomic) BOOL privacyGuestMode;
@property (copy, nonatomic) NSString *p_currentUserID;
@property (nonatomic) BOOL personalRecommendSwitch;
@property (copy, nonatomic) NSString *installID;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *clientDeviceID;
@property (copy, nonatomic) NSString *klinkEgdi;
@property (copy, nonatomic) NSString *idfv;
@property (copy, nonatomic) NSString *idfa;
@property (copy, nonatomic) NSString *ironmanVersion;
@property (readonly, nonatomic, getter=isTeensMode) BOOL teensMode;
@property (readonly, copy, nonatomic) NSString *currentUserID;
@property (copy, nonatomic) id /* block */ privacyAlertAgreeStatusChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tncUpdateVersionCode;
+ (id)shared;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)teenPersonalRecommendSwitchChanged:(BOOL)a0;
- (void)basicModeDidChange:(BOOL)a0;
- (void)updatePersonalRecommendSwitch;
- (void)awe_privacyAlertAgreed;
- (BOOL)enableTrackerMissDid;
- (void)p_updateDeviceID;
- (void)p_updateInstallID;
- (void)p_updateKlinkEgdi;
- (void)p_update_device_info:(id)a0 install_id:(id)a1;
- (void)p_updateAccountStuff;
- (void).cxx_destruct;
- (id)init;

@end
