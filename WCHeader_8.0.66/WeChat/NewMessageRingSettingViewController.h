@class RingToneAvPlayer, WCTableViewSectionManager;

@interface NewMessageRingSettingViewController : NewSettingBaseViewController

@property (nonatomic) unsigned long long ringType;
@property (nonatomic) long long previousSelectedIndex;
@property (retain, nonatomic) WCTableViewSectionManager *section;
@property (retain, nonatomic) RingToneAvPlayer *ringPlayer;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)reloadTableData;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (id)genNewMessageRingCell:(unsigned long long)a0;
- (void)didClickCell:(id)a0 indexPath:(id)a1;
- (void)setUIForRingType:(unsigned long long)a0;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
