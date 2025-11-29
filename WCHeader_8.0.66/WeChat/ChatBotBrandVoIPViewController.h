@class ChatBotBrandDataReporter, NSString, ReportAiChatExtInfo;

@interface ChatBotBrandVoIPViewController : ChatBotBrandBaseVoIPViewController <ChatBotBrandVoIPTalkingViewDeleget>

@property (retain, nonatomic) ChatBotBrandDataReporter *dataReporter;
@property (retain, nonatomic) ReportAiChatExtInfo *reportAiChatExtInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRoomInfo:(id)a0 reportAiChatExtInfo:(id)a1;
- (id)initWithRoomInfo:(id)a0;
- (void)viewDidLoad;
- (void)fetchRoomInfo;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)layoutTalkingView;
- (void)onHeadImageClick;
- (id)genWelcomeInfo;
- (id)genJoinRoomParams;
- (void)joinRoom;
- (int)getChatBotVoIPOpenScene;
- (BOOL)shouldInteractivePop;
- (id)getBrandDataReporter;
- (void).cxx_destruct;

@end
