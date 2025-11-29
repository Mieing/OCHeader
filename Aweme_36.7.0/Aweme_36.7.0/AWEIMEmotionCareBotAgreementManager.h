@class NSString;

@interface AWEIMEmotionCareBotAgreementManager : AWEIMComponentBase <AWEIMConversationInfoOtherSubscriberProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:(id)a0 source:(id)a1;

@end
