@interface WCFinderLiveGetMsgBaseCGI : WCFinderLiveBaseCgi

@property (nonatomic) BOOL asyncTransferData;
@property (nonatomic) BOOL needExtraDirectDisplayMsgs;

+ (id)tranferToLiveCommentDataItems:(id)a0;
+ (id)transferToLiveOnlineContacts:(id)a0;
+ (id)tranferToLiveCommentDataItemsFromFinderLiveAppMsgList:(id)a0 forTaskId:(id)a1;
+ (id)mergeFromInitCommentArr1:(id)a0 initCommentArr2:(id)a1;
+ (void)sortCommentArray:(id)a0;
+ (id)filterUnSupportAsyncCreateAppMsgsFromSrc:(id)a0;
+ (id)filterUnSupportAsyncCreateMsgsFromSrc:(id)a0;
+ (id)filterDirectDisplayMsgsFromSrc:(id)a0 liveTask:(id)a1;
+ (BOOL)isAppMsgReplyToMySelfFromAnchorOrAssistant:(id)a0;
+ (BOOL)isAppMsgToMySelf:(id)a0;
+ (BOOL)needUpdateClientConfig:(id)a0;

- (void)transferDataFromResp:(id)a0 completion:(id /* block */)a1;
- (void)transferDataFromResp:(id)a0 msgList:(id)a1 appMsgList:(id)a2 withCreatedCommentArr:(id)a3 taskId:(id)a4 completion:(id /* block */)a5;

@end
