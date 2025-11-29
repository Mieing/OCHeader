@class NSString;

@interface IESIMConversationJSRuntimeEventComponent : AWEIMComponentBase <AWEIMInputVIewControllerAction, AWEIMConversationInfoOtherSubscriberProtocol, IESIMPlayEntryAction, AWEIMInputActionBarAction>

@property (nonatomic) BOOL firstFrameOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)commonParams;
- (void)hostVC_willDealloc;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_afterFirstRender;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:(id)a0 source:(id)a1;
- (void)inputViewTypeDidChange:(long long)a0 oldInputViewType:(long long)a1;
- (void)plusBtnDidClickWithChatPanelModels:(id)a0;
- (void)playEntryDidOpenWithChatPanelModels:(id)a0;
- (void)playEntryDidClose;
- (void)actionBarDidConfigEntryItems:(id)a0;
- (void)p_setupWithContext:(id)a0;
- (id)hunterClientData;
- (void)sendConversationDataUpdateEvent;
- (id)getStickerPanelParams;

@end
