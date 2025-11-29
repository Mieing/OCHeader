@class UIColor, NSString, MMWebViewPresetUIChildViewConfig, NSMutableSet, UIView, NSMutableArray;

@interface MMWebViewPresetUI : MMObject

@property (retain, nonatomic) NSMutableSet *setDisableMenueItems;
@property (retain, nonatomic) NSMutableArray *arrMenuItemFliters;
@property (nonatomic) BOOL isMenuHeaderHidden;
@property (nonatomic) long long mmUserInterfaceStyle;
@property (nonatomic) unsigned long long statusBarColor;
@property (retain, nonatomic) UIColor *navigationBarColor;
@property (retain, nonatomic) UIColor *navigationBarTitleColor;
@property (nonatomic) double navigationBarTitleAlpha;
@property (nonatomic) BOOL hideCloseButton;
@property (retain, nonatomic) UIColor *navigationLeftItemFontColor;
@property (retain, nonatomic) UIColor *navigationRightItemColor;
@property (retain, nonatomic) NSString *navigationLeftIconName;
@property (copy, nonatomic) NSString *navigationBarTitle;
@property (copy, nonatomic) NSString *navigationBarPlaceholderTitle;
@property (nonatomic) unsigned long long webScrollStyle;
@property (retain, nonatomic) UIColor *backcontainerColor;
@property (nonatomic) unsigned long long backcontainerEffect;
@property (retain, nonatomic) UIColor *addressLabelColor;
@property (nonatomic) BOOL shouldShowDomain;
@property (nonatomic) long long webShowType;
@property (nonatomic) BOOL shouldHideTopbar;
@property (retain, nonatomic) UIColor *webViewBackgroundColor;
@property (nonatomic) BOOL isWebviewBgTransparrent;
@property (nonatomic) BOOL isWebViewLayoutUnderNav;
@property (nonatomic) BOOL isWebViewFakeimmersiveUIStyle;
@property (retain, nonatomic) UIView *customNavigationLoadingView;
@property (nonatomic) unsigned long long customNavigationLoadingMode;
@property (retain, nonatomic) MMWebViewPresetUIChildViewConfig *childModeConfig;
@property (nonatomic) BOOL ornamentStyleEnable;

+ (id)menuItemIdentifier:(unsigned long long)a0;

- (void)setDisableBaseMenuItem:(unsigned long long)a0;
- (void)registerMenuItemFliter:(id)a0;
- (BOOL)isMenuItemPresetedHidden:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
