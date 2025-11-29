@class BDEnvPlatformRecentlyView, BDEnvPlatformBottomView, BDEnvPlatformConfigCell, UITableView, UITapGestureRecognizer, UIButton, BDEnvPlatformConfigModel, NSString, BDEnvGeckoConfigModel, BDEnvPlatformGeckoHeaderView, BDEnvPlatformGeckoAKCell, NSArray, BDEnvPlatformGeckoSwimlaneCell, BDEnvPlatformTitleView;
@protocol BDEnvPlatformConfigVCDelegate;

@interface BDEnvPlatformConfigVC : UIViewController <UITableViewDelegate, UITableViewDataSource, BDEnvGeckoHeaderViewDelegate, BDEnvPlatformBottomViewDelegate, BDEnvPlatformConfigCellDelegate, UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) BDEnvPlatformTitleView *titleView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) BDEnvPlatformConfigModel *model;
@property (retain, nonatomic) BDEnvPlatformRecentlyView *recentlyView;
@property (retain, nonatomic) BDEnvPlatformConfigCell *configCell;
@property (retain, nonatomic) NSArray *modelArray;
@property (retain, nonatomic) BDEnvGeckoConfigModel *geckoModel;
@property (retain, nonatomic) BDEnvPlatformGeckoAKCell *geckoAKCell;
@property (retain, nonatomic) BDEnvPlatformGeckoSwimlaneCell *geckoSwimlaneCell;
@property (retain, nonatomic) BDEnvPlatformRecentlyView *geckoRecentlyView;
@property (retain, nonatomic) NSArray *geckoModelArray;
@property (retain, nonatomic) BDEnvPlatformGeckoHeaderView *geckoHeaderView;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) BDEnvPlatformBottomView *bottomView;
@property (nonatomic) BOOL enabledBOE2;
@property (weak, nonatomic) id<BDEnvPlatformConfigVCDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tapView;
- (void)clickToGo;
- (void)addKeyboardObserver;
- (void)onClickClose;
- (void)updateEnvConfigModel:(id)a0 GeckoModel:(id)a1;
- (void)BOE2Switch:(id)a0;
- (void)updateRecentlyGeckoArray:(id)a0;
- (id)recentlyButtonWithModel:(id)a0;
- (id)recentlyButtonWithGeckoModel:(id)a0;
- (id)closeLogoImage;
- (void)expandButtonClick;
- (void)updateEnvConfigModel:(id)a0;
- (id)initWithModel:(id)a0 geckoModel:(id)a1;
- (void)keyboardWillHide;
- (id)initWithModel:(id)a0;
- (void)keyboardWillShow;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (void)layoutView;
- (void)viewDidDisappear:(BOOL)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupView;
- (void)setupNavigationBar;

@end
