@class NSString, DUXContentSheet, AWEAwemeModel, AWEFeedSubtitleSettingsViewModel, UITableView;

@interface AWEFeedSubtitleSettingsPanel : UIViewController <UITableViewDelegate, UITableViewDataSource, DUXSheetDelegate, AWEFeedSubtitleSettingsTableViewDelegate, AWEFeedSubtitleMessage>

@property (retain, nonatomic) UITableView *tableView;
@property (weak, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEFeedSubtitleSettingsViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (void)showWithAwemeModel:(id)a0;

- (double)panelHeight;
- (void)sheetWillDismiss:(id)a0;
- (id)aAWEPadModuleAdapter;
- (id)dux_titleForColoseButton;
- (id)initWithAwemeModel:(id)a0;
- (void)updateViewController;
- (void)changeSubtitleSelectedLanguageID:(long long)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)reloadSection:(long long)a0;

@end
