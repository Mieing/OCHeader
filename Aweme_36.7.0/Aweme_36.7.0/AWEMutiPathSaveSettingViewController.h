@class UITableView, AWEMutiPathSaveSettingCell, AFDModalViewHelper, NSString, UIView, NSMutableArray, UIButton;

@interface AWEMutiPathSaveSettingViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEPanelTransitionWithBackground>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *headerBar;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIView *navigationView;
@property (retain, nonatomic) NSMutableArray *cellArray;
@property (retain, nonatomic) AWEMutiPathSaveSettingCell *albumCell;
@property (retain, nonatomic) AWEMutiPathSaveSettingCell *cloudAlbumCell;
@property (retain, nonatomic) AWEMutiPathSaveSettingCell *albumAndCloudAlbumCell;
@property (retain, nonatomic) AFDModalViewHelper *helper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)wantsDimmingTransitionBackground;
- (void)p_configData;
- (void)p_reload;
- (unsigned long long)editQuickSaveMutiPathStyleSelected:(id)a0;
- (void)p_setupUI;
- (double)contentHeight;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)backButtonTapped:(id)a0;

@end
