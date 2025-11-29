@class UIView, NSString, AWEIMOnlinePrivacyTopSearchView, UIButton, AWEIMOnlinePrivacyFriendsListViewController, AWEIMOnlinePrivacyDataManager, AWEIMOnlinePrivacySearchViewController, UILabel;

@interface AWEIMOnlinePrivacySettingListViewController : UIViewController <UITextFieldDelegate>

@property (nonatomic) BOOL isFirstSet;
@property (nonatomic) unsigned long long settingType;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEIMOnlinePrivacyTopSearchView *topSearchView;
@property (retain, nonatomic) UIView *listView;
@property (retain, nonatomic) AWEIMOnlinePrivacyFriendsListViewController *friendsListVC;
@property (retain, nonatomic) AWEIMOnlinePrivacySearchViewController *searchVC;
@property (retain, nonatomic) UIButton *completeButton;
@property (copy, nonatomic) NSString *keyword;
@property (retain, nonatomic) AWEIMOnlinePrivacyDataManager *manager;
@property (copy, nonatomic) id /* block */ completeBtnClickBlock;
@property (copy, nonatomic) id /* block */ closeBtnClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeButtonClick:(id)a0;
- (id)initWithType:(unsigned long long)a0 selectUserList:(id)a1;
- (void)selectedListChanged;
- (void)p_search:(id)a0;
- (void)p_searchVCDidSelectUser:(id)a0;
- (void)p_resetSearchVC;
- (void)completeButtonClick:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;
- (void)textFieldDidChange:(id)a0;
- (void)textFieldResignFirstResponder;

@end
