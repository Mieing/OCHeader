@class NSString, NSMutableSet, NSMutableArray, MMTableView;
@protocol ChatBotAsstSocialHistoryOptionalDelegate, ChatBotAsstSocialHistoryVCDelegate;

@interface ChatBotAsstSocialHistoryDataController : NSObject <UITableViewDelegate, UITableViewDataSource, IContactMgrExt, IStrangerContactMgrExt, IChatBotVoIPExt>

@property (retain, nonatomic) NSMutableArray *talkingRoomList;
@property (retain, nonatomic) NSMutableArray *historyList;
@property (retain, nonatomic) NSMutableArray *nowHistorySessionList;
@property (retain, nonatomic) NSMutableSet *localSessionSet;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (nonatomic) BOOL isAppeared;
@property (retain, nonatomic) MMTableView *tableView;
@property (weak, nonatomic) id<ChatBotAsstSocialHistoryOptionalDelegate> optionalDelegate;
@property (weak, nonatomic) id<ChatBotAsstSocialHistoryVCDelegate> vcDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (unsigned int)getActiveSocialRoomCount;
- (void)loadCacheData;
- (void)updateAllData;
- (void)updateDataWithListType:(unsigned int)a0;
- (void)calculateSessionCount:(id)a0;
- (void)reloadData;
- (id)getFooterView;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onUpdateStrangerContactWithUsername:(id)a0;
- (void)onUpdateContact:(id)a0;
- (void)historyViewTableWillLoad;
- (void)historyViewWillPopOrDismiss;
- (void)historyViewWillBePushOrPresent;
- (void)onNewContact:(id)a0;
- (void)onModifyContact:(id)a0;
- (void)onAddNewStrangerContact:(id)a0;
- (void)onStrangerContactUpdated:(id)a0 Contact:(id)a1;
- (void)onSocialHistoryUpdateWithInfo:(id)a0;
- (void).cxx_destruct;

@end
