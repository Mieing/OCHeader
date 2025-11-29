@class NSString, ChatBotVOIPMainView;

@interface ChatBotCommonVoIPViewController : ChatBotBaseVoIPViewController <ChatBotVOIPMainViewelegate>

@property (retain, nonatomic) ChatBotVOIPMainView *mainView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRoomInfo:(id)a0;
- (void)fetchRoomInfo;
- (void)viewDidAppear:(BOOL)a0;
- (void)layoutTalkingView;
- (id)genJoinRoomParams;
- (int)getOpenScene;
- (void)joinRoom;
- (BOOL)shouldInteractivePop;
- (double)onChatBotVOIPMainViewGetStatusBarHeight;
- (void)oonChatBotVOIPMainViewHangup;
- (void)onChatBotVOIPMainViewChangeVideoMode:(BOOL)a0;
- (id)getVideoPreviewView;
- (void)onChatBotVOIPMainViewFlipCamera;
- (void).cxx_destruct;

@end
