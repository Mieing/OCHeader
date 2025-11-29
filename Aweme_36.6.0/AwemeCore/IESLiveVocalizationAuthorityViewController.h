@class UITableView, NSString, IESLiveVocalizationAuthorityStore, UIView, UILabel, UIButton;

@interface IESLiveVocalizationAuthorityViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, IESLiveAnchorPayFunctionSettingCellDelegate>

@property (retain, nonatomic) IESLiveVocalizationAuthorityStore *store;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UIButton *backBtn;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) BOOL useStandardPanel;
@property (nonatomic) BOOL showBackBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)settingCellClickControl:(id)a0;
- (void)backAction;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithStore:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupViews;

@end
