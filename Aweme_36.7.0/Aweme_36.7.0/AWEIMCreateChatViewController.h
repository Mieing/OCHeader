@class AWEIMMessageConversation, NSString, NSArray, UILabel;

@interface AWEIMCreateChatViewController : AWEIMListBaseViewController <AWERouterViewControllerProtocol>

@property (retain, nonatomic) UILabel *completionLabel;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) AWEIMMessageConversation *fromConversation;
@property (retain, nonatomic) NSArray *participants;
@property (nonatomic) BOOL isCreateGroupFromSingleChat;
@property (retain, nonatomic) NSString *hashString;
@property (nonatomic) BOOL isCreatingGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)changeToMultiselect:(BOOL)a0;
- (void)p_dismiss;
- (id)p_title;
- (void)p_updateNavBar;
- (void)updateMultiselectCount:(long long)a0;
- (void)p_cancelMultiSelect;
- (void)p_didTapComplete;
- (void)p_switchToMultiSelect;
- (void)tappedFeature:(id)a0;
- (BOOL)canTapCellAtIndexPath:(id)a0;
- (long long)currentFunctin;
- (id)functionArray;
- (BOOL)canSelectCellAtIndexPath:(id)a0;
- (void)p_pop;
- (id)curConversationID;
- (BOOL)disableSelectCellIsSelected;
- (id)participantWithUserId:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;

@end
