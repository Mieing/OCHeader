@class NSString, AWEIMMessageConversation;

@interface IESIMGroupEnterChatEventReportComponent : AWEIMComponentBase <IESIMGroupMessageListEnterChatInterface>

@property (weak, nonatomic) AWEIMMessageConversation *conversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)p_reportEventWithScene:(long long)a0;
- (id)p_makeParamsWithScene:(long long)a0;
- (void)p_publishWithScene:(long long)a0 response:(id)a1 error:(id)a2;
- (void).cxx_destruct;

@end
