@class UITableView, NSArray, ShelfInfo, NSString, UILabel, UIView, UIButton;
@protocol IESLiveNativeAppSettingsDelegate;

@interface IESLiveNativeAppCardMoreSettingsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSArray *settings;
@property (retain, nonatomic) UIView *edgeView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UITableView *settingsTableView;
@property (weak, nonatomic) id<IESLiveNativeAppSettingsDelegate> delegate;
@property (retain, nonatomic) ShelfInfo *shelfInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeButtonDidClick:(id)a0;
- (id)titleForType:(unsigned long long)a0;
- (void)trackShelfCellSettingsPageShow;
- (void)blankAreaDidClick:(id)a0;
- (void)trackShelfCellSettingsPageOperation:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithSettings:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setUpUI;

@end
