@class NSArray, NSString, DUXButton, UIView, UITableView;

@interface AWEStoryOnboardingHalfViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, DUXSheetDelegate>

@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) DUXButton *confirmButton;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *items;
@property (copy, nonatomic) id /* block */ willDismissBlock;
@property (readonly, nonatomic) double contentHeight;
@property (copy, nonatomic) id /* block */ extraTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetWillDismiss:(id)a0;
- (void)sheetDidDragToDismiss:(id)a0;
- (void)trackShowEvent;
- (id)alertConfigDict;
- (void)onClickConfirmButton:(id)a0;
- (void)trackDismissEventWithType:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)setupUI;
- (void)setupData;

@end
