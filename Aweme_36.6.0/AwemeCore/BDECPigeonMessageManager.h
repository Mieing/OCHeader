@class BDECIMClient, NSObject;
@protocol OS_dispatch_queue;

@interface BDECPigeonMessageManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *messageNotifyQueue;
@property (retain, nonatomic) BDECIMClient *client;
@property (nonatomic) unsigned long long messageSendErrorCount;

- (void)asyncSendTextMessageInConversation:(id)a0 text:(id)a1 bizRole:(id)a2 bizExt:(id)a3 completion:(id /* block */)a4;
- (void)asyncSendEmoticonMessageInConversation:(id)a0 emoticonWidth:(id)a1 emoticonHeight:(id)a2 emoticonAnimateURL:(id)a3 emotionType:(id)a4 emotionSetId:(id)a5 emotionId:(id)a6 emotionName:(id)a7 bizRole:(id)a8 bizExt:(id)a9 completion:(id /* block */)a10;
- (void)resendMessage:(id)a0;
- (id)skipSendImageMessageInConversation:(id)a0 imageWidth:(id)a1 imageHeight:(id)a2 imageURI:(id)a3 bizRole:(id)a4 bizExt:(id)a5 error:(id *)a6;
- (id)skipSendVideoMessageInConversation:(id)a0 videoWidth:(id)a1 videoHeight:(id)a2 coverURL:(id)a3 vid:(id)a4 duration:(id)a5 bizRole:(id)a6 bizExt:(id)a7 error:(id *)a8;
- (void)recallMessageWithConversation:(id)a0 message:(id)a1 pigeonBizType:(id)a2 completion:(id /* block */)a3;
- (id)sendMessage:(id)a0 messageType:(long long)a1 extraExt:(id)a2 error:(id *)a3;
- (void)asyncSendMessage:(id)a0 messageType:(long long)a1 extraExt:(id)a2 completion:(id /* block */)a3;
- (void)onNewP2PMessage:(id)a0;
- (void)sendUserEnterMessageWithRequestModel:(id)a0 dictCompletion:(id /* block */)a1;
- (id)sendImageMessageInConversation:(id)a0 imageWidth:(id)a1 imageHeight:(id)a2 imageURI:(id)a3 bizRole:(id)a4 bizExt:(id)a5 error:(id *)a6;
- (id)sendTextMessageInConversation:(id)a0 text:(id)a1 bizRole:(id)a2 bizExt:(id)a3 error:(id *)a4;
- (id)sendMessage:(id)a0 extraExt:(id)a1 skipSend:(BOOL)a2 error:(id *)a3;
- (void)sendUserEnterMessageWithPigeonShopId:(id)a0 conGroupId:(id)a1 extParams:(id)a2 pigeonBizType:(id)a3 completion:(id /* block */)a4;
- (void)asyncSendMessage:(id)a0 extraExt:(id)a1 completion:(id /* block */)a2;
- (id)getPigeonClientConfig;
- (id)sendVideoMessageInConversation:(id)a0 videoWidth:(id)a1 videoHeight:(id)a2 coverURL:(id)a3 vid:(id)a4 duration:(id)a5 bizRole:(id)a6 bizExt:(id)a7 error:(id *)a8;
- (void)onReceiveMessageSentResponse:(id)a0;
- (id)initWithIMClient:(id)a0;
- (id)sendMessageReceiverID:(id)a0;
- (void)doTrackWhenReceiveMessageResponseWithNotification:(id)a0;
- (void)sortMessageWhenInsertNewMessages:(id)a0;
- (void)didInsertNewMessageNotification:(id)a0;
- (void)onReceiveMessageUpdate:(id)a0;
- (id)sendMessage:(id)a0 extraExt:(id)a1 error:(id *)a2;
- (void)notifyDidInsertNewMessages:(long long)a0 messageModels:(id)a1 belongingBizConversationMap:(id)a2;
- (void).cxx_destruct;
- (id)sendMessage:(id)a0 error:(id *)a1;

@end
