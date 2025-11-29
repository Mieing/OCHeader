@class UIView, NSString, NSArray, AWELiveVisibleScopeTabListViewController, AWELiveVisibleScopeSearchViewController, UIButton, AWEVisibleScopeManager, UICollectionView, UILabel, AWELiveVisibleScopeSearchView;

@interface AWELiveVisibleScopeListViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWELiveVisibleScopeSearchViewDelegate, UITextFieldDelegate>

@property (retain, nonatomic) NSString *awemeID;
@property (retain, nonatomic) NSArray *tabArray;
@property (retain, nonatomic) AWEVisibleScopeManager *manager;
@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) unsigned long long curVisibleType;
@property (nonatomic) unsigned long long originVisibleType;
@property (nonatomic) BOOL isExemptionScene;
@property (nonatomic) unsigned long long selectedTabType;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *limitTipLabel;
@property (retain, nonatomic) AWELiveVisibleScopeSearchView *searchView;
@property (retain, nonatomic) AWELiveVisibleScopeSearchViewController *searchVC;
@property (retain, nonatomic) UICollectionView *tabCollectionView;
@property (retain, nonatomic) UIButton *completeButton;
@property (retain, nonatomic) UIView *listView;
@property (retain, nonatomic) AWELiveVisibleScopeTabListViewController *allListVC;
@property (retain, nonatomic) AWELiveVisibleScopeTabListViewController *chatGroupVC;
@property (retain, nonatomic) AWELiveVisibleScopeTabListViewController *friendsVC;
@property (retain, nonatomic) AWELiveVisibleScopeTabListViewController *fansVC;
@property (retain, nonatomic) AWELiveVisibleScopeTabListViewController *followingVC;
@property (copy, nonatomic) id /* block */ selectUserListBlock;
@property (copy, nonatomic) id /* block */ didFinishUpdateExemptionUserListBlock;
@property (copy, nonatomic) id /* block */ selectUserListCallback;
@property (copy, nonatomic) id /* block */ cancelUserListBlock;
@property (nonatomic) BOOL isPlayBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transImage:(id)a0;
- (void)selectedListChanged;
- (void)clearSearchView;
- (void)p_search:(id)a0;
- (void)p_resetSearchVC;
- (void)removeSelectObject:(id)a0;
- (id)initWithType:(unsigned long long)a0 AwemeID:(id)a1 trackContext:(id)a2 originUserList:(id)a3;
- (id)initWithType:(unsigned long long)a0 AwemeID:(id)a1 trackContext:(id)a2 originUserList:(id)a3 isExemptionScene:(BOOL)a4;
- (id)userIdStringArray:(id)a0;
- (id)currentTabListVC:(unsigned long long)a0;
- (void)p_selectUser:(id)a0 needCheckStranger:(BOOL)a1;
- (id)liveUserFromAwemUser:(id)a0;
- (void)completeButtonTappedInExemptionScene;
- (void)addUploadVisibleSelectMonitor:(id)a0 requestCode:(long long)a1 requestHintMsg:(id)a2 type:(unsigned long long)a3 userList:(id)a4 updateFailedList:(id)a5 cancelFailedList:(id)a6;
- (void)completeButtonTapped:(id)a0;
- (void)p_selectAwemeUser:(id)a0 needCheckStranger:(BOOL)a1;
- (void)removeChatGroup:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;
- (void)textFieldDidChange:(id)a0;
- (void)dismissSelf;

@end
