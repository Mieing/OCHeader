@class NSString, NSDictionary, DUXContentSheet, UILabel, UITableView;

@interface AWESearchGeneralLayoutSettingViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, DUXSheetDelegate, AWESearchGeneralLayoutSettingCellDelegate>

@property (retain, nonatomic) UILabel *naviTitle;
@property (weak, nonatomic) DUXContentSheet *contentSheet;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showWithTrackParams:(id)a0;
+ (id)getSettingsDialogTitleText;

- (void)trackShow;
- (void)didSelectWithCellType:(long long)a0;
- (void)trackClickWithCellType:(long long)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;

@end
