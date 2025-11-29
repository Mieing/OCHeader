@interface QQApi : NSObject

+ (id)handleOpenURL:(id)a0 sourceApplication:(id)a1 annotation:(id)a2;
+ (void)setIsUserAgreedAuthorization:(BOOL)a0;
+ (BOOL)canUseSDK;
+ (void)registerQQConnectAppId:(id)a0;
+ (void)registerPluginWithId:(id)a0;
+ (void)registerQQConnectOpenId:(id)a0;
+ (void)registerAccessToken:(id)a0;
+ (BOOL)isQQInstalled;
+ (BOOL)isTIMInstalled;
+ (BOOL)isQQSupportApiForProxyLogin;
+ (void)registerQQUin:(id)a0;
+ (long long)checkLegalForMessage:(id)a0;
+ (void)cgiShareReportWithMessage:(id)a0 andCallsource:(int)a1;
+ (void)showInstallTIMTips;
+ (void)showInstallQQTips;
+ (BOOL)checkQQSupportMessage:(id)a0;
+ (long long)checkMessageContentLegal:(id)a0;
+ (BOOL)isQQApiObjectLegal:(id)a0;
+ (BOOL)isQQSupportApiForThirdAppGroup;
+ (BOOL)isQQSupportApiForAvatarSetting;
+ (BOOL)isQQSupportApiForMiniApp;
+ (BOOL)isQQSupportApiForLaunchMiniApp;
+ (BOOL)isQQSupportApiForCheckAuth;
+ (BOOL)isQQSupportApiForGroupPro;
+ (void)showErrorWithWebView:(id)a0;
+ (BOOL)isQQSupportQZoneShare;
+ (BOOL)isQQSupportQZoneMediaShare;
+ (BOOL)isQQSupportApi;
+ (BOOL)isQQSupportApiForGameConsortiumBindingGroup;
+ (BOOL)isTIMSupportApiForGameConsortiumBindingGroup;
+ (BOOL)isQQSupportApiForDataLine;
+ (BOOL)isQQSupportAddFriend;
+ (BOOL)isTIMSupportAddFriend;
+ (id)getQQInstallURL;
+ (id)getTIMInstallURL;
+ (long long)sendMessage:(id)a0;
+ (id)handleOpenURL:(id)a0;

- (id)init;

@end
