@class NSMutableArray, NSString, IESLiveAnchorAdminInteractiveSettingViewConfig, UILabel, UIView, UITableView;
@protocol IESLiveInteractionSettingsAnchorInterface;

@interface IESLiveAnchorAdminInteractiveSettingView : UIView <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *titleSeperatorLineView;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) BOOL useStandardPanel;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) IESLiveAnchorAdminInteractiveSettingViewConfig *config;
@property (copy, nonatomic) id /* block */ askForDisableLinkmic;
@property (weak, nonatomic) id<IESLiveInteractionSettingsAnchorInterface> settingsActionDelegate;
@property (copy, nonatomic) id /* block */ didUpdateValueBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchEnableLinkmicButtonWithIsOn:(BOOL)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithConfig:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)loadData;
- (void)setupViews;

@end
