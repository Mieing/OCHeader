@class UIView, NSString, NSArray, AWEUserModel, UIImageView, AFDModalViewHelper, UITableView, UIButton, HTSLiveUser, UILabel;

@interface AWEConcernBellPushVideoStrategyPanelViewController : UIViewController <AWEPanelTransitionWithBackground, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) AFDModalViewHelper *halfModalViewHelper;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *indicatorLineView;
@property (retain, nonatomic) AWEUserModel *toUser;
@property (retain, nonatomic) HTSLiveUser *toLiveUser;
@property (copy, nonatomic) id /* block */ strategyChangeAction;
@property (retain, nonatomic) NSArray *strategyDatas;
@property (nonatomic) unsigned long long selectedStrategy;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) unsigned long long bellPushType;
@property (nonatomic) BOOL useCardUIStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)wantsDimmingTransitionBackground;
- (void)configUI;
- (void)changeBellPushStrategy:(unsigned long long)a0 oldStrategy:(unsigned long long)a1;
- (void)trackNewVideoNotificationSwitchWithOldStrategy:(unsigned long long)a0 newStrategy:(unsigned long long)a1;
- (double)heightForHalfContent;
- (void)trackNewVideoNotificationClickWithStrategy:(unsigned long long)a0;
- (void)p_clickCloseButton:(id)a0;
- (id)initWithToUser:(id)a0 currStrategy:(unsigned long long)a1 strategyChangeAction:(id /* block */)a2;
- (void)loadStrategyDatas;
- (void)setupCardUIStyleUI;
- (id)initWithToLiveUser:(id)a0 currStrategy:(unsigned long long)a1 strategyChangeAction:(id /* block */)a2;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (id)cellReuseIdentifier;
- (void)setupViews;

@end
