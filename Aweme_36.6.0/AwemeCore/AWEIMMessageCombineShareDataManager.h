@interface AWEIMMessageCombineShareDataManager : NSObject

+ (void)fetchCombineShareDetailInfoWithRequest:(id)a0 completeBlock:(id /* block */)a1;
+ (void)p_getDBMessageListWithRequestSubMessageList:(id)a0 originConversationId:(id)a1 messageList:(id)a2 completBlock:(id /* block */)a3;
+ (void)p_getDBMessageListWithRequestSubMessageList:(id)a0 conversationId:(id)a1 messageList:(id)a2 completBlock:(id /* block */)a3;
+ (id)p_getLocalUsableMessageWithSubMessageList:(id)a0 combineShareMessage:(id)a1 preferDegrade:(BOOL)a2 ignoreUsable:(BOOL)a3;
+ (id)filterNeedRequestMsgServerIdList:(id)a0 resultMessages:(id)a1;
+ (id)getInlineMsg:(id)a0 needRequestMsgServerIdList:(id)a1;
+ (void)storeContentMessages:(id)a0 withRequest:(id)a1 message:(id)a2;
+ (void)getDownloadMsg:(id)a0 needRequestMsgServerIdList:(id)a1 completeBlock:(id /* block */)a2;
+ (void)requestWithCompletion:(id /* block */)a0 infoRequest:(id)a1 message:(id)a2 realRequest:(id)a3 subMessageList:(id)a4;
+ (id)convertMsgDictToContentMsg:(id)a0 withParentCombineMsg:(id)a1;
+ (long long)getMsgStatusFromExtDict:(id)a0 withCurrentStatus:(long long)a1;
+ (void)tryDeleteFileAtPath:(id)a0;
+ (id)convertMsgInfoArrToContentMsgArr:(id)a0 withParentCombineMsg:(id)a1;
+ (void)downloadMsgFromURL:(id)a0 withInfoRequest:(id)a1 downloadURI:(id)a2 completeBlock:(id /* block */)a3;
+ (void)requestURI:(id)a0 withAccessChain:(id)a1 message:(id)a2 requestCompletionBlock:(id /* block */)a3;
+ (id)convertContentMsgToIMMsg:(id)a0 withParentCombineMsg:(id)a1 subMsg:(id)a2 preferDegrade:(BOOL)a3 ignoreUsable:(BOOL)a4;

@end
