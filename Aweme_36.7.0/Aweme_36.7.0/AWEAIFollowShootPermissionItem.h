@class NSString, UIImage, AWEAwemeModel, NSNumber;

@interface AWEAIFollowShootPermissionItem : NSObject <AWEAfterPublishAdvanceSettingItemProtocol>

@property (retain, nonatomic) Class cellClass;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *toast;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) BOOL shouldHideLineView;
@property (nonatomic) BOOL switcherState;
@property (nonatomic) BOOL controlEnabled;
@property (retain, nonatomic) NSNumber *danmakuPermission;
@property (retain, nonatomic) NSNumber *commentProtectionMode;
@property (nonatomic) BOOL shouldShowTipButton;
@property (copy, nonatomic) NSString *tipText;
@property (copy, nonatomic) NSString *tipButtonIconName;
@property (copy, nonatomic) NSString *tipAlertTitle;
@property (copy, nonatomic) NSString *tipAlertMesssage;
@property (copy, nonatomic) NSString *tipAlertConfirmText;
@property (nonatomic) BOOL popupTipStyle;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSNumber *duetPermission;
@property (retain, nonatomic) NSNumber *commentPermission;
@property (copy, nonatomic) NSString *introText;
@property (nonatomic) BOOL selectedState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackCellShow;
- (void)onSwitherToggled:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)onTipButtonClicked;
- (void)__postAiFollowShootPermissionSetting:(id)a0 withCompletion:(id /* block */)a1;
- (void)trackSwitchEvent:(BOOL)a0;
- (void)trackAlertShowEvent;
- (void).cxx_destruct;

@end
