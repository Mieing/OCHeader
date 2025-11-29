@class MMUIButton, NSString, UIButton, UITableView, NSMutableArray, NSMutableSet, UILabel, BrandFlowListBaseCellModel;
@protocol BrandFlowListDislikeSelectionHalfViewControllerDelegate;

@interface BrandFlowListDislikeSelectionHalfViewController : MMUIHalfScreenViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MMUIButton *closeBtn;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *submitBtn;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) BrandFlowListBaseCellModel *viewModel;
@property (nonatomic) double heightRatio;
@property (retain, nonatomic) NSMutableArray *selectedEntries;
@property (retain, nonatomic) NSMutableSet *exposedEntries;
@property (weak, nonatomic) id<BrandFlowListDislikeSelectionHalfViewControllerDelegate> bizDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)useTransparentNavibar;
- (BOOL)isForbidPanGesture;
- (id)initWithViewModel:(id)a0;
- (void)baseInit;
- (void)viewDidLoad;
- (void)setupUI;
- (void)updateUI;
- (double)getMaxHalfScreenHeight;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidTransitionToNewSize;
- (id)wordingAtIndex:(unsigned long long)a0;
- (void)onCloseButtonClicked:(id)a0;
- (void)onSubmitButtonClicked:(id)a0;
- (void)submitDislikeReason:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_handleWordingEntrySelect:(id)a0;
- (void).cxx_destruct;

@end
