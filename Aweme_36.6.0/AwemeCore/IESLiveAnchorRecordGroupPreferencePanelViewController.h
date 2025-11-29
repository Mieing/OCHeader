@class HTSEventContext, NSString, NSArray, UIView, UIButton, UITableView, IESLiveOpenLivePermissionModel, NSNumber, UILabel;
@protocol IESLiveAnchorRecordPreferenceService;

@interface IESLiveAnchorRecordGroupPreferencePanelViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, IESLiveAnchorRecordGroupPreferencePanelCellDelegate>

@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSString *liveType;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) id<IESLiveAnchorRecordPreferenceService> recordPreference;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UIButton *backBtn;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (copy, nonatomic) id /* block */ dissmissBlock;
@property (nonatomic) BOOL showBackButton;
@property (retain, nonatomic) IESLiveOpenLivePermissionModel *permissionModel;
@property (nonatomic) unsigned long long roomLiveType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTrackContext:(id)a0 roomID:(id)a1 liveType:(id)a2;
- (void)recordPanelCellDidTappedWithCellItem:(id)a0 switchOn:(BOOL)a1 completion:(id /* block */)a2;
- (void)p_setupItems:(BOOL)a0;
- (void)p_setupUI;
- (void)backAction;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)reloadTable;

@end
