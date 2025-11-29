@class IESNativeAppInfoPanelModel, UITableView, UIImageView, NSString, UIView, UILabel, UIButton;

@interface IESNativeAppInfoPanelController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate>

@property (retain, nonatomic) IESNativeAppInfoPanelModel *model;
@property (retain, nonatomic) UIView *edgeView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *cover;
@property (retain, nonatomic) UILabel *mainTitle;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UITableView *abilities;
@property (nonatomic) double totalHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeButtonDidClick:(id)a0;
- (void)updateWithModel;
- (void)close;
- (void)reloadData;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewDidLoad;
- (void)show;
- (void)setupUI;
- (void)showOnViewController:(id)a0;

@end
