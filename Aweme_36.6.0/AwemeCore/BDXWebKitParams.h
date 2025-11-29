@class UIColor, NSArray, BDXWebSecureLinkConfig, NSURL, NSDictionary, NSString, WKWebViewConfiguration;

@interface BDXWebKitParams : BDXKitParams <AnnieXWebKitModelProtocol>

@property (retain, nonatomic) NSURL *resolvedURL;
@property (nonatomic) BOOL enableTTNet;
@property (nonatomic) BOOL falconSchemeHandlerEnable;
@property (copy, nonatomic) NSArray *webInstancePlugins;
@property (retain, nonatomic) WKWebViewConfiguration *webViewConfig;
@property (nonatomic) BOOL enableOpaque;
@property (retain, nonatomic) UIColor *loadingBgColor;
@property (retain, nonatomic) BDXWebSecureLinkConfig *secureLinkConfig;
@property (nonatomic) BOOL disableJSBridgeBroadcastNotification;
@property (copy, nonatomic) id /* block */ customGlobalPropsScriptBlock;
@property (copy, nonatomic) id /* block */ webInterceptorBlock;
@property (copy, nonatomic) NSDictionary *additionalRequestHeaderFields;
@property (copy, nonatomic) NSDictionary *additionalRequestParams;
@property (copy, nonatomic) NSArray *appendCommonParamsHostAllowList;
@property (nonatomic) BOOL enableWebContentPreloadOffline;
@property (retain, nonatomic) UIColor *containerBackgroundColor;
@property (copy, nonatomic) id /* block */ hasAgreedPrivacy;
@property (copy, nonatomic) id /* block */ searchBlock;
@property (copy, nonatomic) id /* block */ saveWebImage;
@property (copy, nonatomic) id /* block */ networkCommonParamsBlock;
@property (copy, nonatomic) NSString *customUA;
@property (nonatomic) BOOL enablePreCreate;
@property (nonatomic) BOOL enableWarmup;
@property (copy, nonatomic) id /* block */ enableTTNetWithURL;
@property (nonatomic) BOOL disableResourceLoaderTask;
@property (nonatomic) BOOL enableReuse;
@property (copy, nonatomic) Class bridgeClass;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (copy, nonatomic) NSArray *globalPropsFilterKeys;
@property (nonatomic) BOOL fromAnnieX;
@property (nonatomic) BOOL fromAnnieXSL;
@property (nonatomic) double fontScale;
@property (nonatomic) double viewZoom;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) id /* block */ appThemeBlock;
@property (copy, nonatomic) NSString *bridgeNameSpace;
@property (retain, nonatomic) id monitorSettingModel;
@property (nonatomic) BOOL prefetchToGlobalProps;
@property (copy, nonatomic) NSDictionary *prefetchInitData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
