@class NSString, AWEIMChatThemeModel;

@interface AWEIMMessageListThemeComponent : AWEIMComponentBase <AWEIMMessageListDataAction, AWEIMMessageListThemeInterface, AWEIMConversationInfoOtherSubscriberProtocol>

@property (retain, nonatomic) AWEIMChatThemeModel *themeModel;
@property (copy, nonatomic) NSString *lastChatThemeExt;
@property (copy, nonatomic) NSString *lastBgImageExt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)onConversationDidUpdateWithConversation:(id)a0;
- (void)hostVC_willDealloc;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:(id)a0 source:(id)a1;
- (id)p_createDefaultThemeModelIfNeeded;
- (void)p_updateChatThemeIfChangeExt;
- (void)p_onThemeExtDidChange:(id)a0 bgImageExt:(id)a1;
- (void)p_updateTheme:(id)a0 themeExt:(id)a1 bgImageExt:(id)a2;
- (void)trackChatTopicStatus:(id)a0;
- (void)p_onlyChangeBgImageExt:(id)a0;
- (void).cxx_destruct;
- (id)conversation;

@end
