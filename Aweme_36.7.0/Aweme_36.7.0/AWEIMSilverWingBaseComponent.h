@class NSString, AWEIMTextMessage, NSMutableDictionary, NSData, TTHttpTask;

@interface AWEIMSilverWingBaseComponent : AWEIMComponentBase <AWEIMMessageListBackgroundAction, AWEIMMessageListScreenShotAction, AWEIMSilverWingBaseInterface, AWEIMConversationInfoOtherSubscriberProtocol>

@property (retain) TTHttpTask *task;
@property long long retryCount;
@property (weak) AWEIMTextMessage *message;
@property (copy) NSString *lastDataStr;
@property (retain, nonatomic) NSMutableDictionary *messageIDRetryCountDict;
@property BOOL hasRequestSuccess;
@property (retain) NSData *lastData;
@property (copy, nonatomic) NSString *lastMsgIdWhenScreenShot;
@property BOOL lastMessageIsEmptyPack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onUserDidTakeScreenshot;
- (void)hostVC_willDealloc;
- (void)componentDidMounted:(id)a0;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:(id)a0 source:(id)a1;
- (void)transToAgreementDitalView;
- (void)requestWithMessage:(id)a0 callback:(id /* block */)a1;
- (void)interruptWithConversationID:(id)a0 message:(id)a1 type:(long long)a2;
- (id)lastMessageIdWhenUserTakeScreenShot;
- (id)p_messageBaseViewController;
- (void)handleRequestTimeout;
- (id)parseDataToModel:(id)a0;
- (void).cxx_destruct;

@end
