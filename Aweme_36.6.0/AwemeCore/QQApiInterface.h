@interface QQApiInterface : NSObject

+ (long long)sendReq:(id)a0;
+ (BOOL)handleOpenURL:(id)a0 delegate:(id)a1;
+ (void)stopLog;
+ (void)startLogWithBlock:(id /* block */)a0;
+ (id)serializeURL:(id)a0 params:(id)a1;
+ (BOOL)isQQInstalled;
+ (BOOL)isTIMInstalled;
+ (BOOL)isQQSupportApi;
+ (void)setSwitchPrintLogToFile:(BOOL)a0;
+ (void)showMessageRequestFromQQ:(id)a0 delegate:(id)a1;
+ (void)getMessageRequestFromQQ:(id)a0;
+ (long long)SendMessageToQQRequest:(id)a0;
+ (long long)responseToGetMessageFromQQ:(id)a0;
+ (long long)responseToShowMessageFromQQ:(id)a0;
+ (BOOL)responseToSendMessageToQQ:(id)a0 delegate:(id)a1;
+ (long long)sendMessageToQQWithReq:(id)a0;
+ (void)reportSDKCheck:(long long)a0 cmd:(id)a1 isQzone:(BOOL)a2;
+ (id)jasonValueWithStringData:(id)a0;
+ (long long)sendMessageToQQQZoneWithReq:(id)a0;
+ (void)sendMessageToQQGroupProWithMessageRequest:(id)a0 sendResultBlock:(id /* block */)a1;
+ (void)sendQueryQQGroupProInfo:(id)a0 resultBlock:(id /* block */)a1;
+ (BOOL)handleOpenUniversallink:(id)a0 delegate:(id)a1;
+ (void)sendThirdAppBindGroupReq:(id)a0 resultBlock:(id /* block */)a1;
+ (void)sendThirdAppUnBindGroupReq:(id)a0 resultBlock:(id /* block */)a1;
+ (void)sendThirdAppJoinGroupReq:(id)a0 resultBlock:(id /* block */)a1;
+ (long long)SendReqToQZone:(id)a0;
+ (long long)sendMessageToQQAvatarWithReq:(id)a0;
+ (long long)sendMessageToQQAuthWithReq:(id)a0;
+ (void)sendMessageToCreateQQGroupProWithMessageRequest:(id)a0 sendResultBlock:(id /* block */)a1;
+ (void)sendMessageToJoinQQGroupProWithMessageRequest:(id)a0 sendResultBlock:(id /* block */)a1;
+ (long long)sendMessageToFaceCollectionWithReq:(id)a0;
+ (BOOL)isTIMSupportApi;
+ (BOOL)isSupportShareToQQ;
+ (BOOL)isSupportPushToQZone;
+ (id)getQQInstallUrl;
+ (id)getTIMInstallUrl;
+ (id)getLogFilePath;

@end
