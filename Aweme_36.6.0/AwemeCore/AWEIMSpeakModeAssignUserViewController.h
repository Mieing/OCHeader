@class AWEIMMessageConversation, NSArray, IESIMConversationParticipantModel, NSMutableSet, UILabel;

@interface AWEIMSpeakModeAssignUserViewController : AWEIMListBaseViewController

@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) NSArray *participants;
@property (copy, nonatomic) NSArray *defaultSelectUserList;
@property (retain, nonatomic) IESIMConversationParticipantModel *owner;
@property (retain, nonatomic) NSMutableSet *blockedMemvberUidSet;
@property (retain, nonatomic) UILabel *completionLabel;

- (long long)__maxSelectCount;
- (unsigned long long)userPrivacyGetAliasScene;
- (void)updateMultiselectCount:(long long)a0;
- (BOOL)canTapCellAtIndexPath:(id)a0;
- (long long)currentFunctin;
- (BOOL)canSelectCellAtIndexPath:(id)a0;
- (id)curConversationID;
- (void)__updateNavBar;
- (void)__back;
- (id)getParticipantForUid:(id)a0;
- (id)initWithConversation:(id)a0 blockUsers:(id)a1;
- (void)__didTapCompletionButton;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)fetchData;
- (void)viewDidLoad;
- (void)prepareData:(id)a0;

@end
