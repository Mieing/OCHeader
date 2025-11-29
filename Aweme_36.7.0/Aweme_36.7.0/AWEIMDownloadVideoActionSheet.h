@class UILabel, UIButton, NSString, UIView, NSMutableArray, UITableView;

@interface AWEIMDownloadVideoActionSheet : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) NSMutableArray *groupModels;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeBtn;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ cancelHandler;
@property (copy, nonatomic) id /* block */ willDismissHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setup;
- (void)p_updateUI;
- (void)addActionForGroupId:(id)a0 title:(id)a1 iconImage:(id)a2 handler:(id /* block */)a3;
- (void)p_cancel;
- (void)dismiss;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (BOOL)accessibilityViewIsModal;
- (void)showInView:(id)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;

@end
