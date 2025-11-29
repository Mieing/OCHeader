@class UIColor, NSString, MMUIViewController, NSMutableArray;

@interface WAAppOpenCustomUIParameter : MMObject

@property (nonatomic) unsigned long long m_uiLaunchAnimationType;
@property (nonatomic) BOOL m_bHideSimulatedNativeLeftReturnButton;
@property (nonatomic) BOOL m_bForceLightMode;
@property (nonatomic) BOOL m_bUseSimulatedNativeLoading;
@property (nonatomic) BOOL m_bNeedShowTemplateNav;
@property (nonatomic) BOOL m_bNeedHideTemplateNavOnExpand;
@property (nonatomic) BOOL m_bNeedShowShareBtnOnTemplateNav;
@property (copy, nonatomic) id /* block */ m_shareBtnAction;
@property (nonatomic) BOOL m_bTemplateNavShareNormalWeAppMessage;
@property (copy, nonatomic) NSString *m_oTmeplateNavAvartarUrl;
@property (nonatomic) BOOL m_bHideTemplateNavAvatar;
@property (copy, nonatomic) NSString *m_oTemplateNavNickName;
@property (copy, nonatomic) NSString *m_nsTemplateNavSubtitle;
@property (nonatomic) long long m_restoreOrientationOnDismiss;
@property (nonatomic) BOOL noLaunchAnimation;
@property (nonatomic) BOOL needDoubleCheckContactTransparentBackgroundEnabled;
@property (nonatomic) BOOL forbidEntryAnimation;
@property (nonatomic) BOOL keepContextView;
@property (nonatomic) BOOL keepContextPageInCycleJump;
@property (nonatomic) BOOL m_forbidDefaultLoadingToast;
@property (weak, nonatomic) MMUIViewController *m_loadingToastVC;
@property (nonatomic) unsigned long long loadingDarkmodeSpecificType;
@property (retain, nonatomic) UIColor *loadingBackgroundColor;
@property (retain, nonatomic) UIColor *loadingForegroundTextColor;
@property (retain, nonatomic) NSMutableArray *widgetParameters;
@property (copy, nonatomic) NSString *m_liteGameLoadingParameters;

- (void).cxx_destruct;

@end
