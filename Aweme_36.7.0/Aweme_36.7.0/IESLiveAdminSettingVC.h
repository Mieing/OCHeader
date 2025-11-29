@class UITableView, IESLiveAdminSettingStore, NSString, UIView, UILabel, UIButton;
@protocol IESLiveAdminstratorListNewCellDelegate, IESLiveAdminSettingAction;

@interface IESLiveAdminSettingVC : UIViewController <UITableViewDataSource, UITableViewDelegate, IESLiveAdminSettingReaction, IESLiveModalPresentable>

@property (retain, nonatomic) IESLiveAdminSettingStore *store;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UIButton *backBtn;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) id<IESLiveAdminSettingAction> actionCreator;
@property (retain, nonatomic) UIButton *removeAdministerBtn;
@property (nonatomic) BOOL isWhite;
@property (nonatomic) double baseViewHeight;
@property (nonatomic) BOOL isBottomType;
@property (retain, nonatomic) UIView *bgView;
@property (weak, nonatomic) id<IESLiveAdminstratorListNewCellDelegate> delegate;
@property (copy, nonatomic) id /* block */ dissmissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)safeBottom;
- (void)showInLandView:(id)a0;
- (void)onSelfHide;
- (void)didItemsReady;
- (id)initWithStore:(id)a0 height:(double)a1 isWhite:(BOOL)a2;
- (double)_safeBottom;
- (void)removeAdministerAction;
- (id)initWithStore:(id)a0 height:(double)a1 isWhite:(BOOL)a2 isBottomType:(BOOL)a3;
- (void)backAction;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)_setupUI;

@end
