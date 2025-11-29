@class UIButton, UILabel, NSString, IESLiveResolutionChooseViewBaseConfig, UIView, UITableView;

@interface IESLiveResolutionChooseView : UIView <UITableViewDelegate, UITableViewDataSource, IESLiveResolutionHDRSwitchViewDelegate>

@property (retain, nonatomic) IESLiveResolutionChooseViewBaseConfig *config;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ disableClickedBlock;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ needPurchaseVSPrivilege;
@property (copy, nonatomic) id /* block */ permissionDeniedForVSPrivilegeBlock;
@property (copy, nonatomic) id /* block */ onHDRSwitchViewInfoButtonTappedBlock;
@property (copy, nonatomic) id /* block */ onHDRSwitchViewSwitchButtonTappedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelClick;
- (double)p_getContentHeight;
- (double)p_tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)onHDRSwitchViewInfoButtonTapped;
- (void)onHDRSwitchViewSwitchButtonTapped;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)layoutSubviews;
- (id)initWithConfig:(id)a0;
- (void)setupUI;

@end
