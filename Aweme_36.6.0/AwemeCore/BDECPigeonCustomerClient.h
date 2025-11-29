@interface BDECPigeonCustomerClient : BDECPigeonClientV2

+ (Class)channelClassWithCommunicateType:(unsigned long long)a0;
+ (unsigned long long)clientType;

- (void)p_loginFetchUserInfoWithGroup:(id)a0 pigeonBizType:(id)a1 loginResult:(id)a2;
- (void)handleDidInsertNewMessages:(long long)a0 messages:(id)a1 belongingBizConversationMap:(id)a2;
- (id)messageVisibilityTypesToHide;
- (id)pigeonUserInfoFromCache;
- (void)storePigeonUserInfoToCache:(id)a0;

@end
