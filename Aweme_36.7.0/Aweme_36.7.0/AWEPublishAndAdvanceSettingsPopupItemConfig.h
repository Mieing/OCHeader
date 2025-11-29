@class NSString, UIImage, AWEPublishAndAdvanceSettingsPopupItemBaseExtraConfig;

@interface AWEPublishAndAdvanceSettingsPopupItemConfig : NSObject

@property (retain, nonatomic) NSString *settingType;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) NSString *indicatorText;
@property (retain, nonatomic) NSString *cellClass;
@property (copy, nonatomic) NSString *toast;
@property (copy, nonatomic) id /* block */ customToastBlock;
@property (nonatomic) BOOL switcherState;
@property (nonatomic) BOOL disable;
@property (nonatomic) long long styleType;
@property (nonatomic) BOOL shouldShowTipButton;
@property (copy, nonatomic) NSString *tipText;
@property (copy, nonatomic) NSString *tipButtonIconName;
@property (copy, nonatomic) NSString *tipAlertTitle;
@property (copy, nonatomic) NSString *tipAlertMesssage;
@property (copy, nonatomic) NSString *tipAlertConfirmText;
@property (nonatomic) BOOL showHighlightedAnimationOnce;
@property (retain, nonatomic) AWEPublishAndAdvanceSettingsPopupItemBaseExtraConfig *extraConfig;

- (void).cxx_destruct;

@end
