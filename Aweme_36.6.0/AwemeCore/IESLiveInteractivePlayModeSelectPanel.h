@class NSArray, NSString, UILabel, UIView, UITableView;

@interface IESLiveInteractivePlayModeSelectPanel : IESLiveInteractionPopupViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *titleSeperatorLineView;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSArray *playModes;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (copy, nonatomic) id /* block */ displayBlock;
@property (nonatomic) BOOL isRoot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onSetupNavBar:(id)a0;
- (id)initWithPlayModes:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setupViews;
- (double)contentViewHeight;

@end
