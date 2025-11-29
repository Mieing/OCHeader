@class AWEAwemeModel, UIView, DUXContentSheet, NSString, AWEBackgroundPlaySettingsViewModel, UIImageView, UITableView, UILabel;

@interface AWEBackgroundPlaySettingsPanel : UIViewController <UITableViewDelegate, UITableViewDataSource, DUXSheetDelegate, AWEBackgroundPlaySettingsTableViewDelegate, AWEBackgroundPlaySettingsPanelProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *warningView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UITableView *tableView;
@property (weak, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEBackgroundPlaySettingsViewModel *viewModel;
@property (nonatomic) long long panelStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showWithAwemeModel:(id)a0 panelStyle:(long long)a1 logExtraParams:(id)a2;
+ (BOOL)shouldShowWithAwemeModel:(id)a0;
+ (void)showWithAwemeModel:(id)a0 logExtraParams:(id)a1;

- (id)initWithAwemeModel:(id)a0 panelStyle:(long long)a1 logExtraParams:(id)a2;
- (void)insertSection:(long long)a0;
- (void).cxx_destruct;
- (void)performBatchUpdates:(id /* block */)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)deleteSection:(long long)a0;
- (void)insertRowAtIndexPath:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)reloadSection:(long long)a0;
- (void)removeRowAtIndexPath:(id)a0;

@end
