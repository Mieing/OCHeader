@class AWEButton, NSString, UIView;

@interface AWEFollowGroupMineViewController : AWEFollowGroupBaseViewController <AWEFollowRelationGroupMessage>

@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) AWEButton *createButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)_fetchDataSuccess;
- (void)_emptyButtonClicked;
- (void)didFinishCreateGroup:(id)a0 groupName:(id)a1;
- (void)didFinishDeleteGroup:(id)a0;
- (void)didFinishUpdateGroupName:(id)a0 newName:(id)a1;
- (void)didFinishAddNewMembers:(id)a0 newUserIds:(id)a1;
- (void)didFinishDropMembers:(id)a0 userIds:(id)a1;
- (void)didFinishUpdateUserBelongGroups:(id)a0;
- (void)_setupCreateButton;
- (void)createButtonClicked;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithGroupType:(long long)a0;
- (void)dealloc;

@end
