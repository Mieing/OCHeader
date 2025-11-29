@class NSString, AWEIMConversationConsultModeModel;

@interface AWEIMConversationInfoOtherConsultingModeComponent : AWEIMComponentBase <AWEIMConversationInfoOtherSubscriberProtocol>

@property (retain, nonatomic) AWEIMConversationConsultModeModel *consultModeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:(id)a0 source:(id)a1;
- (id)vcParent;
- (void).cxx_destruct;

@end
