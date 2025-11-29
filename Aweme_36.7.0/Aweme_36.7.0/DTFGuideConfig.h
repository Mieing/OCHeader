@class NSString, NSDictionary;

@interface DTFGuideConfig : NSObject

@property (copy, nonatomic) NSString *titleColor;
@property (copy, nonatomic) NSString *titleBackPath;
@property (copy, nonatomic) NSString *titleBackBase64;
@property (copy, nonatomic) NSString *titleClosePath;
@property (copy, nonatomic) NSString *titleCloseBase64;
@property (copy, nonatomic) NSString *bannerImg;
@property (copy, nonatomic) NSString *agrtTopTipsColor;
@property (copy, nonatomic) NSString *agrtUnSelColor;
@property (copy, nonatomic) NSString *agrtSelBgColor;
@property (copy, nonatomic) NSString *agrtAgreeColor;
@property (copy, nonatomic) NSString *agrtColor;
@property (copy, nonatomic) NSString *startBtnColor;
@property (copy, nonatomic) NSString *agrtBotTipsColor;
@property (copy, nonatomic) NSString *startBtnDisColor;
@property (copy, nonatomic) NSString *startBtnBgColor;
@property (copy, nonatomic) NSString *startBtnDisBgColor;
@property (copy, nonatomic) NSString *elderBtnDisColor;
@property (copy, nonatomic) NSString *elderBtnBgColor;
@property (copy, nonatomic) NSString *elderBtnDisBgColor;
@property (copy, nonatomic) NSString *exitBtnColor;
@property (copy, nonatomic) NSString *exitBtnBgColor;
@property (copy, nonatomic) NSString *rareFormNameColor;
@property (copy, nonatomic) NSString *rareFormIDColor;
@property (copy, nonatomic) NSString *elderBtnColor;
@property (copy, nonatomic) NSString *rareFormEntBtnColor;
@property (copy, nonatomic) NSString *permissionDialogConfirmColor;
@property (copy, nonatomic) NSString *permissionToastTitleColor;
@property (copy, nonatomic) NSString *permissionToastMsgColor;
@property (copy, nonatomic) NSString *permissionToastBgColor;
@property (copy, nonatomic) NSString *dialogExitTitleColor;
@property (copy, nonatomic) NSString *dialogExitMsgColor;
@property (copy, nonatomic) NSString *dialogExitCancelColor;
@property (copy, nonatomic) NSString *dialogExitConfirmColor;
@property (copy, nonatomic) NSString *dialogPermissionFailedTitleColor;
@property (copy, nonatomic) NSString *dialogPermissionFailedMsgColor;
@property (copy, nonatomic) NSString *dialogPermissionFailedConfirmColor;
@property (copy, nonatomic) NSString *dialogPermissionFailedCancelColor;
@property (copy, nonatomic) NSString *dialogSupportFailedTitleColor;
@property (copy, nonatomic) NSString *dialogSupportFailedMsgColor;
@property (copy, nonatomic) NSString *dialogSupportFailedConfirmColor;
@property (copy, nonatomic) NSString *dialogNetworkFailedTitleColor;
@property (copy, nonatomic) NSString *dialogNetworkFailedMsgColor;
@property (copy, nonatomic) NSString *dialogNetworkFailedConfirmColor;
@property (copy, nonatomic) NSString *settingFailReason;
@property (copy, nonatomic) NSDictionary *originMap;

- (void)setDefaultConfig;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
