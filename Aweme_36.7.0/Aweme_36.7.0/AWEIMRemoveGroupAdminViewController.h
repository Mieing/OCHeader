@class AWEIMMessageConversation, NSString, UIView, UIButton;
@protocol IESIMLoadingViewProtocol;

@interface AWEIMRemoveGroupAdminViewController : AWEIMListBaseViewController

@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (copy, nonatomic) id /* block */ removeGroupAdminBlock;
@property (copy, nonatomic) NSString *previousPage;

- (void)changeToMultiselect:(BOOL)a0;
- (id)conversationDataManager;
- (void)p_save;
- (void)p_dismiss;
- (unsigned long long)userPrivacyGetAliasScene;
- (void)updateMultiselectCount:(long long)a0;
- (long long)currentFunctin;
- (id)curConversationID;
- (void)__trackEditGroupManagerWithParticipantIDs:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)fetchData;
- (void)viewDidLoad;

@end
