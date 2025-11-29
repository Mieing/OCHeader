@class ChatBotVOIPMainView, NSString, ChatBotVoIPRoomInfo, MMUIButton;

@interface ChatBotMultiTalkViewController : MultiTalkMainViewController <ChatBotVOIPMainViewelegate>

@property (retain, nonatomic) ChatBotVOIPMainView *mainView;
@property (retain, nonatomic) ChatBotVoIPRoomInfo *roomInfo;
@property (retain, nonatomic) MMUIButton *minimizeButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRoomInfo:(id)a0;
- (void)initViews;
- (void)layoutMainView;
- (void)initMinimizeButton;
- (void)onMinimizeButtonClick;
- (void)setPanelSpeakerReady:(BOOL)a0;
- (void)updateGroupInfo:(id)a0;
- (void)onMultiTalkReady;
- (id)getMainView;
- (void)oonChatBotVOIPMainViewHangup;
- (void)onChatBotVOIPMainViewOpenMic;
- (void)onChatBotVOIPMainViewCloseMic;
- (double)onChatBotVOIPMainViewGetStatusBarHeight;
- (unsigned int)onGetCurrentDeviceStatus;
- (unsigned long long)getRoomId;
- (id)getGroupInfo;
- (void).cxx_destruct;

@end
