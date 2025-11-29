@interface AWEIMXBridgeSendEncryptedImageMessageMethod : BDXBridgeMethod

+ (void)p_sendMessageWithType:(unsigned long long)a0 uid:(id)a1 secUID:(id)a2 cid:(id)a3 msg:(id)a4 paramModel:(id)a5 completion:(id /* block */)a6;
+ (void)__showSnackBarWithUserID:(id)a0 conversationID:(id)a1 chatType:(unsigned long long)a2 bottomOffsetNum:(id)a3 logExtra:(id)a4;
+ (void)__showSendMessageSuccessSnackBarForShareModel:(id)a0 bottomOffset:(id)a1 logExtra:(id)a2;
+ (void)__transferToMessageVCWithUid:(id)a0 shareModel:(id)a1 extraParams:(id)a2;
+ (void)__transferToMessageVCWithCid:(id)a0 shareModel:(id)a1 extraParams:(id)a2;
+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (long long)authType;
- (id)methodName;

@end
