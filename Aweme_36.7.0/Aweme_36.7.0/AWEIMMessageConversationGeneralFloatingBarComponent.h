@class NSString, NSMutableDictionary;

@interface AWEIMMessageConversationGeneralFloatingBarComponent : AWEIMComponentBase <AWEIMMessageListEnterChatSubscriberProtocol, AWEIMMessageConversationGeneralFloatingBarInterface>

@property (retain, nonatomic) NSMutableDictionary *subscribers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (id)messageListEnterChatRequestParamsForRequestSource:(long long)a0;
- (void)updateMessageListEnterChatData:(id)a0 requestSource:(long long)a1;
- (void)registerGeneralFloatingBarType:(long long)a0 handler:(id)a1;
- (void).cxx_destruct;
- (void)handleResponse:(id)a0;

@end
