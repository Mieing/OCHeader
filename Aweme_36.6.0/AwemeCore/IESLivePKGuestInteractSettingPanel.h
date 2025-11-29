@class HTSEventContext, NSString, NSArray, UIView, NSMutableDictionary, UITableView, IESLivePresentNavController, UILabel, NSNumber;
@protocol IESLivePKGuestInteractSettingsAction;

@interface IESLivePKGuestInteractSettingPanel : UIView <UITableViewDelegate, UITableViewDataSource, IESLiveSocialInteractAction, IESLivePKGuestInteractSettingPanelAction>

@property (copy, nonatomic) NSArray *configurations;
@property (copy, nonatomic) NSArray *sectionItems;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *seperatorLineView;
@property (nonatomic) BOOL didTrackForGuestGift;
@property (nonatomic) double tableViewHeight;
@property (nonatomic) BOOL oddTimeToRefreshSettingPanel;
@property (weak, nonatomic) id<IESLivePKGuestInteractSettingsAction> actionDelegate;
@property (nonatomic) BOOL isFromPK;
@property (retain, nonatomic) NSMutableDictionary *latestSettings;
@property (retain, nonatomic) NSNumber *fixedPanelHeight;
@property (weak, nonatomic) IESLivePresentNavController *nav;
@property (nonatomic) BOOL isPanelShow;
@property (nonatomic) BOOL didFetchSetting;
@property (copy, nonatomic) id /* block */ heightDidChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)p_addObserver;
- (void)didUpdatedSettingsSucceed;
- (void)didUpdatedSettingsSucceedWithData:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 actionDelegate:(id)a2 eventContext:(id)a3;
- (void)updatePanelScrollEnabled:(BOOL)a0;
- (void)fetchLocalAudienceInteractiveSettingsWithCompletion:(id /* block */)a0;
- (void)loadDataAndRefresh;
- (id)audienceInteractiveSettingsAction;
- (id)authorityItemsWithSettings:(id)a0;
- (void)refreshPanelHeight;
- (id)descForApplySettingType:(int)a0;
- (void)showLinkAcceptAuthority:(int)a0 settings:(id)a1;
- (void)showAudioAndVideoAuthority:(int)a0 settings:(id)a1;
- (id)makeSwitchItemWithTitle:(id)a0 initialValue:(BOOL)a1;
- (id)addAlphaMaskParameterToUrl:(id)a0;
- (id)generateAuthorityViewModelWithSettings:(id)a0;
- (void)showThirdLevelPanelWithPopupItemConfigBlock:(id /* block */)a0 viewModelBlock:(id /* block */)a1 didShowBlock:(id /* block */)a2;
- (id)generateAudioAndVideoViewModelWithSettings:(id)a0;
- (id)applySettingTypes;
- (void)trackDiff;
- (void)panelDidPopupAndShow;
- (void)updateListWithSettings:(int)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)record;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (unsigned long long)currentScene;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)setupViews;

@end
