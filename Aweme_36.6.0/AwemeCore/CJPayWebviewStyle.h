@class NSString, UIColor;

@interface CJPayWebviewStyle : JSONModel

@property (nonatomic) BOOL usesCustomStatusBarStyle;
@property (nonatomic) long long customStatusBarStyle;
@property (nonatomic) unsigned long long backButtonStyle;
@property (copy, nonatomic) NSString *showsLoadingStr;
@property (retain, nonatomic) UIColor *statusBarColor;
@property (retain, nonatomic) UIColor *containerBcgColor;
@property (retain, nonatomic) UIColor *webBcgColor;
@property (nonatomic) BOOL needTransitionBackground;
@property (nonatomic) BOOL hidesNavbar;
@property (nonatomic) BOOL hidesBackButton;
@property (retain, nonatomic) UIColor *navbarBackgroundColor;
@property (retain, nonatomic) UIColor *navbarTitleColor;
@property (copy, nonatomic) NSString *titleText;
@property (retain, nonatomic) UIColor *backButtonColor;
@property (nonatomic) BOOL hidesStatusBar;
@property (copy, nonatomic) NSString *statusBarTextStyleString;
@property (nonatomic) BOOL needFullScreen;
@property (nonatomic) BOOL bounceEnable;
@property (nonatomic) BOOL isLandScape;
@property (readonly, nonatomic) BOOL showsLoading;
@property (nonatomic) BOOL canvasMode;
@property (nonatomic) BOOL disablePopGesture;
@property (nonatomic) BOOL isCaijingSaas;
@property (nonatomic) long long closeWebviewTimeout;
@property (copy, nonatomic) NSString *secLinkScene;
@property (copy, nonatomic) NSString *cjCustomUserAgent;
@property (copy, nonatomic) NSString *enableFontScale;
@property (readonly, nonatomic) BOOL isNeedFullyTransparent;
@property (readonly, nonatomic) BOOL needAppendCommonQueryParams;
@property (copy, nonatomic) NSString *bankSign;
@property (copy, nonatomic) NSString *bankName;
@property (copy, nonatomic) NSString *bankTitleStyle;
@property (copy, nonatomic) NSString *bankTitleIcon;
@property (copy, nonatomic) NSString *bankTitleText;
@property (copy, nonatomic) NSString *returnUrl;
@property (copy, nonatomic) NSString *disableHistory;
@property (copy, nonatomic) NSString *bankPageFrom;
@property (copy, nonatomic) NSString *bankType;
@property (copy, nonatomic) NSString *footerType;
@property (copy, nonatomic) NSString *footerBgColor;
@property (copy, nonatomic) NSString *guideText;
@property (copy, nonatomic) NSString *guideTextColor;
@property (copy, nonatomic) NSString *protocolText;
@property (copy, nonatomic) NSString *protocolTextColor;
@property (copy, nonatomic) NSString *protocolLink;
@property (copy, nonatomic) NSString *openMethod;
@property (copy, nonatomic) NSString *postData;
@property (copy, nonatomic) NSString *postFields;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void)amendByUrlString:(id)a0;
- (void)amendByDic:(id)a0;
- (void)p_setDefaultWebviewStyle;
- (void)setBackButtonStyleWithNSString:(id)a0;
- (id)JSONObjectForBackButtonStyle;
- (void).cxx_destruct;
- (id)init;

@end
