@interface LSIMSettingsManager : NSObject

+ (id)pigeonSDKConfig;
+ (id)reportPageURL;
+ (BOOL)needCommonNetworkParametersForCardDataFetching;
+ (id)poiIMLynxSchemaDict;
+ (id)merchantAuthConfig;
+ (id)goodsListURL;
+ (id)groupGoodsListURL;
+ (id)orderListURL;
+ (id)chatListTitle;
+ (BOOL)chatListPageOrderFeatureEnabled;
+ (BOOL)needCommonNetworkParametersForCardSending;
+ (id)poiIMSettings;
+ (id)handCardListURLWithDefaultURL:(id)a0 settingsKey:(id)a1;
+ (id)getValuePreferSettings:(id)a0;
+ (id)handleLynxCDNURL:(id)a0;
+ (id)poiIMLynxSettings;
+ (id)timxDefaultDBInterfaceRefactorConfig;

@end
