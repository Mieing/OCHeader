@class NSString, AWEButton, UIImageView, AWEUILoadingView, UITableView, UIButton, NSMutableArray, UILabel, AWEFollowGroupListResponseModel;

@interface AWEFollowGroupPanelViewController : AWEHalfScreenBaseViewController <UITableViewDataSource, UITableViewDelegate, AWEFollowGroupPanelProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *createButton;
@property (retain, nonatomic) UIImageView *emptyImage;
@property (retain, nonatomic) AWEButton *createBigButton;
@property (retain, nonatomic) AWEButton *confirmButton;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEFollowGroupListResponseModel *responseModel;
@property (retain, nonatomic) NSMutableArray *belongGroupsArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (id)aweui_emptyPageBgContainerView;
- (id)aAWEPadModuleAdapter;
- (BOOL)onlyTopCornerClips;
- (BOOL)useSmootherTransition;
- (void)createButtonClicked;
- (void)_fetchGroupListData;
- (void)_beforeCreateGroupAlertShow;
- (void)_showGroupPanelAfterCreateOneWithGroupID:(id)a0 groupName:(id)a1;
- (void)_trackFollowGroupConfirm;
- (void)_updateBelongGroups;
- (void)configWithUserID:(id)a0 enterFrom:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)viewStyle;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)cornerRadius;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (unsigned long long)animationStyle;
- (void)viewDidLoad;
- (void)cancelButtonTapped;
- (void)_showLoadingView;
- (void)_hideLoadingView;
- (void)_setupUI;
- (double)containerHeight;
- (void)confirmButtonClicked;
- (double)containerWidth;

@end
