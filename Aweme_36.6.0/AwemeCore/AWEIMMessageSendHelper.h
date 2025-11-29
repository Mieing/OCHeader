@class NSString;

@interface AWEIMMessageSendHelper : NSObject <IESIMSendMessageInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)shareWebMessageToChatWithParams:(id)a0 completionBlock:(id /* block */)a1;
- (void)sendMessageWithParams:(id)a0 completion:(id /* block */)a1;
- (void)sendPhotoRecordFinishedWithInfo:(id)a0 completion:(id /* block */)a1;
- (void)sendVideoRecordFinishedWithInfo:(id)a0 completion:(id /* block */)a1;
- (id)createMessageByJSBParams:(id)a0;
- (id)mentionedUserAttributedStringWithUser:(id)a0 conversationID:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 rawAttributedString:(id)a3;
- (id)containersWithShareModel:(id)a0 messagesCreater:(id /* block */)a1 customContainer:(id /* block */)a2;
- (void)saveLastShareWithContainer:(id)a0;
- (id)mentionedUserAttributedStringWithUser:(id)a0 designatedMentionName:(id)a1 extraAttributes:(id)a2 conversationID:(id)a3 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 rawAttributedString:(id)a5;
- (void)sendFeedQuoteReplyMessageWithContent:(id)a0 awemeModel:(id)a1 referMessage:(id)a2 trackInfo:(id)a3 completion:(id /* block */)a4;
- (id)p_taskOfMessageWithJSBParams:(id)a0;
- (void)p_sendMessageWithType:(unsigned long long)a0 uid:(id)a1 secUID:(id)a2 cid:(id)a3 msg:(id)a4 extraInfo:(id)a5 completion:(id /* block */)a6;
- (id)p_allowedDictionaryForJSBMessageTypeWithParams:(id)a0;
- (id)p_messageCreatedWithClass:(Class)a0 messageType:(long long)a1 params:(id)a2;
- (id)p_detailErrorMessageWithType:(long long)a0;
- (id)p_checkSourceValidWithParams:(id)a0;
- (void)p_showSnackBarWithUserID:(id)a0 conversationID:(id)a1 chatType:(unsigned long long)a2;
- (void)p_showSendMessageSuccessSnackBarForShareModel:(id)a0;
- (void)p_transferToMessageVCWithUid:(id)a0 shareModel:(id)a1 extraParams:(id)a2;
- (void)p_transferToMessageVCWithCid:(id)a0 shareModel:(id)a1 extraParams:(id)a2;

@end
