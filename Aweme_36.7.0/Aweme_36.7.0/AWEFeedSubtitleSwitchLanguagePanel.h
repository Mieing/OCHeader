@class NSString, DUXContentSheet, AWEAwemeModel, AWEFeedSubtitleSwitchLanguageViewModel, UITableView;

@interface AWEFeedSubtitleSwitchLanguagePanel : UIViewController <UITableViewDelegate, UITableViewDataSource, DUXSheetDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (weak, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEFeedSubtitleSwitchLanguageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (void)showSwitchLanguagePanelWithModel:(id)a0;

- (void)sheetDidClickReturnButton:(id)a0;
- (id)aAWEPadModuleAdapter;
- (id)dux_titleForColoseButton;
- (id)initWithAwemeModel:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;

@end
