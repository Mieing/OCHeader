@class UIView, IESLiveAnchorAudienceInteractiveGameModel, NSArray, NSString, UIButton, UITableView, MASConstraint, UILabel;

@interface IESLiveGameOpenPlatformAuthListView : UIView <UITableViewDelegate, UITableViewDataSource, IESLiveOpenPlatformAuthListenerInterface>

@property (retain, nonatomic) IESLiveAnchorAudienceInteractiveGameModel *gameModel;
@property (retain, nonatomic) UIButton *coverBtn;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UITableView *tableview;
@property (retain, nonatomic) NSArray *authInfo;
@property (retain, nonatomic) MASConstraint *heightCons;
@property (copy, nonatomic) id /* block */ backBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)getDataSource;
- (void)backButtonDidClick;
- (void)appAuthDidChange:(id)a0 authInfo:(id)a1;
- (void)displayWithShowType:(BOOL)a0 completion:(id /* block */)a1;
- (void)_trackEvent:(id)a0 params:(id)a1;
- (id)initWithGameModel:(id)a0 DIContext:(id)a1;
- (void)handleSonicOrientationChanged:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)setupUI;
- (void)layoutUI;

@end
