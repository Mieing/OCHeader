@class UITableViewCell, NSString, AWEProfileVacantController, AWEUserModel, AWEUILoadingView, UITableView, NSDictionary, UIViewController, AWEUIListTableViewCell, AWEUIAccountStatusTableViewCell;
@protocol AWEUserProfileTabVCDelegate, AWEUserRecommendEmptyRecommendViewControllerProtocol;

@interface AWEEmptyRecommendViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEProfileVacantDelegate, AWEUserProfileTabBaseMethod, AWEEmptyRecommendViewControllerProtocol>

@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) long long emptyType;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIViewController<AWEUserRecommendEmptyRecommendViewControllerProtocol> *horizontalRecommendVC;
@property (retain, nonatomic) UITableViewCell *horizontalRecommendCell;
@property (retain, nonatomic) AWEUIListTableViewCell *tipCell;
@property (retain, nonatomic) AWEUIAccountStatusTableViewCell *accountStatusTipsCell;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) unsigned long long vacantState;
@property (retain, nonatomic) AWEProfileVacantController *vacantController;
@property (nonatomic) struct CGPoint { double x; double y; } savedContentOffset;
@property (weak, nonatomic) id<AWEUserProfileTabVCDelegate> delegate;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (double)contentOffsetY;
- (void)adjustContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (double)contentSizeHeight;
- (id)initWithUserID:(id)a0;
- (BOOL)__isUserUpdated:(id)a0;
- (void)updateViewControllerState;
- (BOOL)__blockOrBlockedOrPrivacy;
- (id)iconImageForEmptyType;
- (id)titleForEmptyType;
- (id)descriptionForEmptyType;
- (BOOL)shouldShowHorizontalRecommendCard;
- (double)horizontalRecommendTopPadding;
- (void)__openCommunityGuidelinesURL:(id)a0;
- (BOOL)enableNewStyleEmptyPage;
- (id)profileVacantContainerView:(unsigned long long)a0;
- (void)profileVacantConfig:(id)a0 state:(unsigned long long)a1;
- (void)reloadData;
- (void).cxx_destruct;
- (id)contentView;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)refreshData;
- (double)footerInset;
- (void)_setupUI;
- (void)updateWithUser:(id)a0;

@end
