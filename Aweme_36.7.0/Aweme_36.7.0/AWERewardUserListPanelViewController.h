@class UIView, NSString, NSArray, AWEUILoadingView, UITableView, UIPanGestureRecognizer, MASConstraint, AWERewardListDataController, UILabel;
@protocol AWECommentGesProtocol;

@interface AWERewardUserListPanelViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, AWERewardUserListPanelViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UILabel *emptyLabel;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) MASConstraint *baseViewHeight;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (retain, nonatomic) MASConstraint *baseViewBottom;
@property (nonatomic) double baseViewBottomOffset;
@property (retain, nonatomic) AWERewardListDataController *dataController;
@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (retain, nonatomic) UILabel *errorLabel;
@property (weak, nonatomic) id<AWECommentGesProtocol> gesDelegate;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) BOOL isBGColorWhite;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL isShowInContainerView;
@property (nonatomic) BOOL hasRefreshed;
@property (copy, nonatomic) NSArray *insertRewarderIDs;
@property (copy, nonatomic) id /* block */ didDismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)onUIThemeChange;
- (id)initWithAwemeModel:(id)a0;
- (void)__setupUI;
- (BOOL)__shouldShowBottomLabel;
- (id)__bottomViewForRewardList;
- (id)__labelFont;
- (id)__labelTextColor;
- (void)__pushNoti;
- (void)__highlightInsertedUsers;
- (void)__selfPanned:(id)a0;
- (void)__refreshUI;
- (id)__indexPathForSecUserID:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)refreshData;

@end
