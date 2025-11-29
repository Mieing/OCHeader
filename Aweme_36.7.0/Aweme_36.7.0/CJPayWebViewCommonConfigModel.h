@class NSArray, CJPaySchemaRedirectConfig;
@protocol CJPayFontScaleSetting, CJPaySchemaParamSetting;

@interface CJPayWebViewCommonConfigModel : JSONModel

@property (copy, nonatomic) NSArray *intergratedHostReplaceBlockList;
@property (nonatomic) BOOL useIESAuthManager;
@property (nonatomic) BOOL offlineUseSchemeHandler;
@property (nonatomic) BOOL enablePostIntercept;
@property (copy, nonatomic) NSArray *offlineExcludeUrlList;
@property (nonatomic) long long showErrorViewTimeout;
@property (copy, nonatomic) NSArray *showErrorViewDomainList;
@property (nonatomic) BOOL disableOfflineOpt;
@property (nonatomic) BOOL disableCommonQueryFix;
@property (copy, nonatomic) NSArray *appendCommonParamsHostAllowList;
@property (copy, nonatomic) NSArray *appendCommonParamsPathList;
@property (nonatomic) BOOL enablePushAnimationFix;
@property (nonatomic) BOOL enablePushAnimationFixV2;
@property (nonatomic) BOOL enableDismissAnimationFix;
@property (nonatomic) BOOL enableCloseWebViewFix;
@property (nonatomic) BOOL disableCloseWebviewCompatMode;
@property (nonatomic) BOOL disableLynxCardLazyInit;
@property (nonatomic) BOOL enableJSBPolicyFix;
@property (nonatomic) double rrpUploadDelay;
@property (nonatomic) BOOL enableRRPUpload;
@property (nonatomic) BOOL disableChooseMultiMedia;
@property (copy, nonatomic) NSArray<CJPayFontScaleSetting> *fontScaleSettings;
@property (copy, nonatomic) NSArray *uploadAllJSBList;
@property (nonatomic) BOOL enableRemoveUADID;
@property (copy, nonatomic) NSArray *transitionBackgroundPathList;
@property (retain, nonatomic) CJPaySchemaRedirectConfig *schemaRedirectConfig;
@property (nonatomic) BOOL enableAnnie;
@property (copy, nonatomic) NSArray *annieURLList;
@property (copy, nonatomic) NSArray *annieURLBlackList;
@property (copy, nonatomic) NSArray<CJPaySchemaParamSetting> *appendSchemaParamsRules;
@property (nonatomic) BOOL disableAnnieXCardFalcon;
@property (nonatomic) BOOL disableLiveBizLoadURLLazyInit;
@property (nonatomic) BOOL disableSwipeFix;
@property (nonatomic) BOOL disableOpenPageFix;
@property (nonatomic) BOOL enableRemoveGetPhoneNumberToken;
@property (nonatomic) BOOL enableRemoveWebViewCookies;
@property (nonatomic) BOOL disableAnnieXCardSchemaAdapter;
@property (nonatomic) BOOL disableAnnieXCardTracker;
@property (nonatomic) BOOL disableCloseCallbackFix;
@property (nonatomic) BOOL enableAnnieXCardBidFix;
@property (nonatomic) BOOL disableWalletPopupUrlFix;
@property (nonatomic) BOOL disableSafeHeaderFix;
@property (nonatomic) BOOL disableWalletPopupTracker;
@property (nonatomic) BOOL enableApproximateCompress;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
