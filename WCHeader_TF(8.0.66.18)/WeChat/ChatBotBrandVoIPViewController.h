@class NSString;

@interface ChatBotBrandVoIPViewController : ChatBotBrandBaseVoIPViewController <ChatBotVoIPTalkingViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRoomInfo:(id)a0;
- (void)fetchRoomInfo;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)layoutTalkingView;
- (void)onHeadImageClick;
- (id)genJoinRoomParams;
- (void)joinRoom;
- (int)getChatBotVoIPOpenScene;
- (BOOL)shouldInteractivePop;

@end
