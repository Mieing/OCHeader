@class ChatBotVoIPRoomInfo, ChatBotVoIPMiniInAppView, NSString;

@interface ChatBotMultiTalkMiniInAppView : MultitalkMiniInAppView <ChatBotVoIPMiniInAppViewDelegate>

@property (retain, nonatomic) ChatBotVoIPRoomInfo *roomInfo;
@property (retain, nonatomic) ChatBotVoIPMiniInAppView *chatBotMiniView;
@property (copy, nonatomic) id /* block */ autoResetTalkingInfoBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRoomInfo:(id)a0;
- (id)getVoiceInputView;
- (void)dealloc;
- (void)cancelAutoResetTalkingInfoBlock;
- (void)setupTalkingInfo:(id)a0;
- (void)onMiniInAppViewOnMainAreaClick;
- (void).cxx_destruct;

@end
