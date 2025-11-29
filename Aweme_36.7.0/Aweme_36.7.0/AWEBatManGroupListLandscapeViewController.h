@class UITableView, NSArray, NSString, UIView, AWEBatManTransitionController;

@interface AWEBatManGroupListLandscapeViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, BtnClickDelegate>

@property (retain, nonatomic) NSArray *groupList;
@property (retain, nonatomic) AWEBatManTransitionController *transitionController;
@property (retain, nonatomic) UIView *rightBlankView;
@property (retain, nonatomic) UIView *leftContainerView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSString *gameName;
@property (copy, nonatomic) id /* block */ listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)awe_shouldBypassPresentationHook;
- (void)configUI;
- (void)addRoundedCorner;
- (void)onTapBlank;
- (void)onBtnClickListener:(int)a0;
- (id)initWithGroupListData:(id)a0 andWithGameName:(id)a1 andWithClickListener:(id /* block */)a2;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)shouldAutorotate;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dismissAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
