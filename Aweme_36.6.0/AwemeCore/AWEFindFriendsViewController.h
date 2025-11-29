@class UIView, AWEInviteSearchViewController, NSString, UIImageView, AWEFindFriendsContext, AWEAnimatedButton, AWEFindFriendsSearchSectionController, UILabel;

@interface AWEFindFriendsViewController : AWEBaseListViewController <UIScrollViewDelegate, BTMPageManagableProtocol, CAAnimationDelegate, AWEFindFriendsSearchDelegate, AWEFindFriendsViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEFindFriendsContext *context;
@property (retain, nonatomic) UIView *searchPlaceHolderView;
@property (retain, nonatomic) AWEAnimatedButton *searchPlaceHolderContainerView;
@property (retain, nonatomic) UIImageView *searchIconImageView;
@property (retain, nonatomic) UILabel *searchPlaceHolderLabel;
@property (retain, nonatomic) AWEInviteSearchViewController *searchVC;
@property (retain, nonatomic) AWEFindFriendsSearchSectionController *searchSectionController;
@property (copy, nonatomic) NSString *searchText;
@property (nonatomic) BOOL needsFetchList;
@property (readonly, nonatomic) BOOL hasAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserRecommendModuleServiceDOUYINLiteAdaperClass;

- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (void)customLayoutCollectionView:(id)a0;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (void)setupBinding;
- (void)fetchList;
- (void)setNeedsFetchList;
- (void)trackEnterFindFriendsList:(id)a0 enterMethod:(id)a1;
- (void)searchUser;
- (void)showSearchPlaceHolderView;
- (void)hideSearchPlaceHolderView;
- (void)p_rotated:(id)a0;
- (void)uploadAddressBook;
- (id)aAWEUserRecommendModuleServiceDOUYINLiteAdaper;
- (void)p_setUpPlachHolderViewWithSearchText:(id)a0;
- (void)p_searchUser;
- (void)p_showSearchPlaceHolderView;
- (void)handleUploadAddressBook;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithContext:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;
- (id)bgColor;
- (void)setupCollectionView:(id)a0;

@end
