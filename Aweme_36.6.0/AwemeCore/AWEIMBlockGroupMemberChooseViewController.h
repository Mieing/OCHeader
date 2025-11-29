@class AWEIMMessageConversation, NSArray, NSSet, AWEIMBlockGroupMemberChooseViewControllerContext, UILabel, NSMutableArray, UIViewController;
@protocol IESIMGroupSpeakPermissionService;

@interface AWEIMBlockGroupMemberChooseViewController : AWEIMListBaseViewController

@property (retain, nonatomic) UILabel *addBlockLabel;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) NSArray *participants;
@property (retain, nonatomic) NSMutableArray *selectedMembersUids;
@property (copy, nonatomic) NSSet *blockedMemvberUidSet;
@property (copy, nonatomic) NSSet *unblockedDisspeakMemvberUidSet;
@property (retain, nonatomic) AWEIMBlockGroupMemberChooseViewControllerContext *context;
@property (weak, nonatomic) id<IESIMGroupSpeakPermissionService> speakPermissionService;
@property (retain, nonatomic) UIViewController *blockManagerVC;
@property (retain, nonatomic) UIViewController *backToVCWhenOperationFailed;

- (void)changeToMultiselect:(BOOL)a0;
- (unsigned long long)userPrivacyGetAliasScene;
- (void)updateMultiselectCount:(long long)a0;
- (BOOL)canTapCellAtIndexPath:(id)a0;
- (long long)currentFunctin;
- (BOOL)canSelectCellAtIndexPath:(id)a0;
- (BOOL)enableNewStyle;
- (id)curConversationID;
- (void)dealWithunblockedDisspeakMemvberUidSet:(id)a0;
- (id)participantDataManager;
- (void)__updateNavBar;
- (void)__back;
- (void)__didTapAddBlock;
- (void)addShareModelToSelectList:(id)a0;
- (void)removeShareModelFromSelectList:(id)a0;
- (void)updateReturnKeyType;
- (id)getParticipantForUid:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)fetchData;
- (void)viewDidLoad;
- (void)updateParticipants;

@end
