@class AWEAwemeModel, UIView, NSString, UIImageView, NSDictionary, UITableView, NSMutableArray, DUXButton, UILabel, DUXDivider;
@protocol AWEMultipleSelectionDislikePanelViewControllerDelegate;

@interface AWEMultipleSelectionDislikePanelViewController : UIViewController <AWEDislikePanelCheckBoxCellDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSDictionary *trackExtra;
@property (retain, nonatomic) UIView *videoInfoView;
@property (retain, nonatomic) UIImageView *videoThumb;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) DUXDivider *line;
@property (retain, nonatomic) DUXButton *submitButton;
@property (retain, nonatomic) DUXButton *closeButton;
@property (retain, nonatomic) NSMutableArray *selectedInfos;
@property (weak, nonatomic) id<AWEMultipleSelectionDislikePanelViewControllerDelegate> selectDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (id)dux_titleForColoseButton;
- (void)didClickedClose;
- (void)didClickedSubmit;
- (void)hideLine:(BOOL)a0;
- (void)stateDidChanged:(id)a0 checked:(BOOL)a1;
- (void)configVideoImage:(id)a0;
- (id)getDislikeInfoWithIndexPath:(id)a0;
- (void)addSelectedInfo:(id)a0;
- (void)deselectedInfo:(id)a0;
- (id)initWithData:(id)a0 trackExtra:(id)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)setupUI;

@end
