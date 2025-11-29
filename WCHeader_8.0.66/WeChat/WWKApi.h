@interface WWKApi : NSObject

+ (BOOL)registerApp:(id)a0;
+ (BOOL)registerApp:(id)a0 corpId:(id)a1 agentId:(id)a2;
+ (BOOL)handleOpenUrlString:(id)a0;
+ (BOOL)isAppInstalled;
+ (BOOL)isAppSupportSendSeparateMessages;
+ (BOOL)isAppSupportSendBuffer;
+ (BOOL)isAppSupportUrlDataIsGov:(BOOL)a0;
+ (id)getAppInstallUrl;
+ (id)getApiVersion;
+ (id)getProtocolVersion;
+ (BOOL)openCreateChat;
+ (BOOL)openChatList;
+ (BOOL)sendReq:(id)a0;
+ (BOOL)sendObj:(id)a0;
+ (BOOL)sendObj:(id)a0 scheme:(id)a1;
+ (BOOL)openURL:(id)a0;
+ (BOOL)canOpenURL:(id)a0;
+ (BOOL)p_isAppInstalledWithScheme:(id)a0;
+ (BOOL)isAppInstalled:(long long)a0;
+ (BOOL)sendReq:(id)a0 appType:(long long)a1;

- (BOOL)openURL:(id)a0;
- (BOOL)canOpenURL:(id)a0;

@end
