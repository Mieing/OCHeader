@class NSString, NSDictionary;

@interface DTFLanguageCustomGuideConfig : NSObject

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *agrtTopTipsText;
@property (copy, nonatomic) NSString *agrtAgreeText;
@property (copy, nonatomic) NSString *agrtText;
@property (copy, nonatomic) NSString *agrtBotTipsText;
@property (copy, nonatomic) NSString *startBtnText;
@property (copy, nonatomic) NSString *elderBtnText;
@property (copy, nonatomic) NSString *exitBtnText;
@property (copy, nonatomic) NSString *rareFormNameText;
@property (copy, nonatomic) NSString *rareFormIDText;
@property (copy, nonatomic) NSString *rareFormEntBtnText;
@property (copy, nonatomic) NSString *authPermissionCamera;
@property (copy, nonatomic) NSString *authPermissionAudio;
@property (copy, nonatomic) NSString *authPermissionScreenEvidence;
@property (copy, nonatomic) NSString *authPermissionToastTitle;
@property (copy, nonatomic) NSString *authPermissionToastMsg;
@property (copy, nonatomic) NSString *authPermissionAPPName;
@property (copy, nonatomic) NSString *authPermissionSDKName;
@property (copy, nonatomic) NSString *dialogExitTitle;
@property (copy, nonatomic) NSString *dialogExitMsg;
@property (copy, nonatomic) NSString *dialogExitConfirm;
@property (copy, nonatomic) NSString *dialogExitCancel;
@property (copy, nonatomic) NSString *dialogPermissionFailedTitle;
@property (copy, nonatomic) NSString *dialogPermissionFailedMsg;
@property (copy, nonatomic) NSString *dialogPermissionFailedConfirm;
@property (copy, nonatomic) NSString *dialogPermissionFailedCancel;
@property (copy, nonatomic) NSString *dialogNetworkFailedTitle;
@property (copy, nonatomic) NSString *dialogNetworkFailedMsg;
@property (copy, nonatomic) NSString *dialogNetworkFailedConfirm;
@property (copy, nonatomic) NSString *dialogSupportFailedTitle;
@property (copy, nonatomic) NSString *dialogSupportFailedMsg;
@property (copy, nonatomic) NSString *dialogSupportFailedConfirm;
@property (copy, nonatomic) NSString *settingFailReason;
@property (copy, nonatomic) NSDictionary *originMap;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
