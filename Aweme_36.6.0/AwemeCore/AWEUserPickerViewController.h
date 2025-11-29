@class NSDictionary, NSString, AWEDicoverySearchManager, AWEContactsManager, UITextField, AWEUserFollowingManager, AWEUserListViewController;
@protocol AWEUserPickerViewControllerDelegate;

@interface AWEUserPickerViewController : UIViewController <AWECommonSearchBarDelegate, AWEUserPickerViewControllerDelegate, AWEUserPickerViewControllerProtocol>

@property (retain, nonatomic) AWEContactsManager *contactManager;
@property (retain, nonatomic) AWEDicoverySearchManager *searchManager;
@property (retain, nonatomic) AWEUserFollowingManager *userFollowingManager;
@property (readonly, weak, nonatomic) UITextField *textField;
@property (retain, nonatomic) AWEUserListViewController *recommendUserController;
@property (retain, nonatomic) AWEUserListViewController *searchResultController;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEUserPickerViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSString *refer;
@property (retain, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *source;

- (void)backButtonClicked;
- (void)trackEvent;
- (void)searchButtonClicked;
- (void)fetchRecommendData;
- (void)picker:(id)a0 didPickUser:(id)a1 submitTrack:(BOOL)a2;
- (void)picker:(id)a0 didPickUser:(id)a1;
- (void)buildNavigationHeader;
- (void)addBlurBackground;
- (id)buildUserListTableView;
- (void)loadMoreRecommendResult;
- (void)loadMoreSearchResult:(BOOL)a0;
- (void)refreshSearchResult;
- (void).cxx_destruct;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)viewSafeAreaInsetsDidChange;
- (BOOL)prefersStatusBarHidden;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
