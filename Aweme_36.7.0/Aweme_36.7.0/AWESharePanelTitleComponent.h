@class UIButton, NSString, UILabel, UIView, YYLabel;
@protocol AWEIMPrivacyShareConfigProtocol;

@interface AWESharePanelTitleComponent : AWEIMComponentBase <AWESharePanelComponentViewProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) YYLabel *yyTitleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *searchButton;
@property (nonatomic) unsigned long long searchBtnStyle;
@property (retain, nonatomic) id<AWEIMPrivacyShareConfigProtocol> shareConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isBGColorWhite;
+ (Class)aAWELiteUGSocialModuleAdapterClass;
+ (Class)aAWEFeedShareObtainGoldDOUYINLiteAdapterClass;
+ (Class)aAWEUGKitModuleDOUYINAdapterClass;
+ (id)fcoinTitleAttributedText;
+ (id)liteGoldShareToIMAttributedText;
+ (id)liteGoldtitleAttributedText;
+ (id)__titleAttributes;
+ (BOOL)p_textCanShowTranspondPageTipAlert:(id)a0;
+ (BOOL)canShowTranspondPageTipAlert;
+ (void)p_showActiveUserTipAlert;
+ (id)normalSharePanelTitleWithShareContext:(id)a0 customUIConfig:(id)a1 customFontSize:(double)a2 customTextColor:(id)a3;
+ (id)normalSharePanelTitleWithShareContext:(id)a0 customFontSize:(double)a1 customTextColor:(id)a2;
+ (id)newUIStyleDefaultTitleAttributedTextWithShareContext:(id)a0 customUIConfig:(id)a1 customTextColor:(id)a2;
+ (void)addTapActionOnAttributedString:(id)a0;
+ (id)__titleAttributesWithCustomTextColor:(id)a0;
+ (id)normalSharePanelTitleWithShareContext:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidLoad;
- (void)themeDidChanged;
- (id)aAWELiteUGSocialModuleAdapter;
- (id)aAWEFeedShareObtainGoldDOUYINLiteAdapter;
- (id)aAWEUGKitModuleDOUYINAdapter;
- (double)componentHeight;
- (double)valueInTitleScene:(unsigned long long)a0;
- (double)p_searchButtonW:(unsigned long long)a0;
- (void)p_trackSearchButtonShow;
- (void)updateCloseButtonImage;
- (void)updateSearchButtonImage;
- (void)p_trackSearchButtonClick;
- (void).cxx_destruct;
- (id)componentView;

@end
