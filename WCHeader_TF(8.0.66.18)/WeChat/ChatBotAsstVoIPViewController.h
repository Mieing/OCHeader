@class MemoryMappedKV, NSString, ChatBotAsstSocialHistoryDataController, GetBotChatHistoryResponse_ActiveChat;

@interface ChatBotAsstVoIPViewController : ChatBotBaseVoIPViewController <ChatBotAsstDiscoverViewDelegate, ChatBotAsstSocialHistoryOptionalDelegate, IChatBotAvatarUpdateExt>

@property (nonatomic) int curRoomMode;
@property (nonatomic) BOOL historyTalkedCountFlag;
@property (retain, nonatomic) MemoryMappedKV *mmkv;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int socialType;
@property (retain, nonatomic) GetBotChatHistoryResponse_ActiveChat *activeSocialRoom;
@property (retain, nonatomic) ChatBotAsstSocialHistoryDataController *historyDataController;
@property (nonatomic) BOOL needAutoEnterHistoryPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commonInit;
- (void)dealloc;
- (id)initWithScene:(unsigned int)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(BOOL)a0;
- (unsigned int)getChatbotVoIPScene;
- (void)fetchRoomInfo;
- (int)getOpenScene;
- (void)checkNeedModHeadImage;
- (id)genJoinRoomParams;
- (BOOL)isInSocialMode;
- (void)layoutTalkingView;
- (void)changeRoomMode:(int)a0;
- (int)getCurrRoomMode;
- (void)boardViewHitTest:(id)a0;
- (void)openSettingPage;
- (void)onHeadImageClick;
- (void)enterAsstDiscoverPage;
- (void)enterAsstDiscoverPageWithCompletion:(id /* block */)a0;
- (BOOL)needShowMultiHeadImageRow;
- (id)getMemberListForMultiHeadImagRow;
- (void)close;
- (void)enterSocialHistoryPage;
- (unsigned int)getAsstSocialType;
- (unsigned int)getActiveSocialRoomCount;
- (void)fetchTalkingSocialHistory:(id /* block */)a0;
- (void)beginTalkWithOtherAsstWithRoomInfo:(id)a0;
- (id)getHistoryDataController;
- (void)enterMyAsstSocialRoomWithGroupId:(id)a0 activeSocialRoom:(id)a1;
- (void)onTalkingSocialRoomCountUpdate:(unsigned int)a0;
- (void)onHistoryTalkedCountUpdate:(unsigned int)a0;
- (id)getLocalSessionIdArray;
- (void)cacheSessionIdArray:(id)a0;
- (void)getSocialUserHistoryList:(id /* block */)a0;
- (void)onStarBtnClick;
- (BOOL)hasStarCountUpdate;
- (void)saveStarCount:(unsigned int)a0;
- (void)onUpdateAvatar:(id)a0;
- (void).cxx_destruct;

@end
