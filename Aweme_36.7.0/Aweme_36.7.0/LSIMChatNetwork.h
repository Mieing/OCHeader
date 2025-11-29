@interface LSIMChatNetwork : NSObject

+ (void)sendAppletWebhookActionWithConversationID:(id)a0 imAccountID:(id)a1 webhookExt:(id)a2 completion:(id /* block */)a3;
+ (void)submitActionBarWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)requestInputConfigWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)requestCustomerServiceConversationUrlWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)markAwemeNoticeReadWithParams:(id)a0 competion:(id /* block */)a1;
+ (void)requestForClearUnreadMessageWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)requestServiceProgressWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)requestTipWithParam:(id)a0 completion:(id /* block */)a1;
+ (void)closeTipWithParam:(id)a0 completion:(id /* block */)a1;
+ (void)fetchOrderPageURLWithCompletion:(id /* block */)a0;
+ (void)requestCustomerServiceConversationInfoWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)lsimPOSTRequestWitHParams:(id)a0 URLString:(id)a1 needCommonParams:(BOOL)a2 modelClass:(Class)a3 completion:(id /* block */)a4;
+ (void)lsimPOSTRequestWitHParams:(id)a0 URLString:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
+ (void)setPushStateParams:(id)a0 completion:(id /* block */)a1;
+ (void)sendCardMessageWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)sendBulletCardMessageWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)requestPlatformServiceURLInConversationID:(id)a0 shopID:(id)a1 orderID:(id)a2 completion:(id /* block */)a3;
+ (void)requestContactWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)getPushStateWithShopId:(id)a0 completion:(id /* block */)a1;
+ (void)setCurrentPushStateWithShopId:(id)a0 shopStatus:(unsigned long long)a1 completion:(id /* block */)a2;
+ (void)setCurrentServicePushStateWithShopId:(id)a0 shopStatus:(unsigned long long)a1 completion:(id /* block */)a2;
+ (void)setAllShopStatus:(unsigned long long)a0 completion:(id /* block */)a1;
+ (void)setAllShopServicePushStatus:(unsigned long long)a0 completion:(id /* block */)a1;
+ (void)requestEncryptImageURLWithURI:(id)a0 completion:(id /* block */)a1;
+ (id)hostURL;

@end
