@class NSString, UIImage, AWEPublishAndAdvanceSettingsPopupItemBaseExtraConfig, NSNumber;

@interface AWEPublishAdvanceSettingsItem : NSObject <AWEPublishAdvanceSettingsItemProtocol>

@property (copy, nonatomic) NSString *toast;
@property (copy, nonatomic) id /* block */ customToastBlock;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL switcherState;
@property (nonatomic) BOOL controlEnabled;
@property (nonatomic) long long scene;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *indicatorText;
@property (nonatomic) BOOL shouldShowTipButton;
@property (copy, nonatomic) NSString *tipText;
@property (copy, nonatomic) NSString *tipButtonIconName;
@property (copy, nonatomic) NSString *tipAlertTitle;
@property (copy, nonatomic) NSString *tipAlertMesssage;
@property (copy, nonatomic) NSString *tipAlertConfirmText;
@property (nonatomic) BOOL shouldHideLineView;
@property (nonatomic) BOOL popupTipStyle;
@property (nonatomic) BOOL showHighlightedAnimationOnce;
@property (retain, nonatomic) AWEPublishAndAdvanceSettingsPopupItemBaseExtraConfig *extraConfig;
@property (retain, nonatomic) Class cellClass;
@property (copy, nonatomic) NSString *settingKey;
@property (retain, nonatomic) NSNumber *duetPermission;
@property (copy, nonatomic) NSString *introText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
