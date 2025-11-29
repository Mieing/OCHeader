@class AWEIMMessage, NSString;

@interface AWEIMMessageListFormatSendMessageComponent : AWEIMComponentBase <AWEFormatIMConversationInjectSendMessageService, AWEFormatIMConversationInjectTopicCardMessageService, AWEIMSendMessageControllerDelegate>

@property (retain, nonatomic) AWEIMMessage *currentTopicCardMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)helpUserSendMessageInFormat:(id)a0 syncExt:(id)a1 localExt:(id)a2 aiExt:(id)a3;
- (void)helpUserSendAwemeMessageInFormat:(id)a0 syncExt:(id)a1 localExt:(id)a2 aiExt:(id)a3;
- (id)messageSupportMenuItems:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)deleteCurrentTopicCardMessage;
- (void)createAndSendTopicCardMessageWithCardData:(id)a0 querys:(id)a1 style:(long long)a2;
- (BOOL)isShowingTopicCardAsLastMsg;
- (void)hostVC_afterFirstRender;
- (void)calculateSizeAndMaxQueryCountForMessage:(id)a0 querys:(id)a1 style:(long long)a2;
- (double)vcParentViewWidth;
- (id)aiExtParamsAddTosendMessage;
- (void).cxx_destruct;

@end
