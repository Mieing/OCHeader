@class UITableView, NSArray, NSString, DUXContentSheet, UILabel, UIButton;

@interface AWENewPublishPOIRecoverViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, DUXSheetDelegate>

@property (retain, nonatomic) UILabel *titleLab;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UITableView *tableView;
@property (weak, nonatomic) DUXContentSheet *basicSheet;
@property (retain, nonatomic) NSArray *poiModels;
@property (copy, nonatomic) id /* block */ poiDidClickedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)customDialogTag;

- (void)closeButtonDidClicked:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)show;
- (void)setupLayout;

@end
