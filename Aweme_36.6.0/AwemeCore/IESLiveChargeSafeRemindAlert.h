@class UIButton, NSArray, NSString, UILabel, UIView, UITableView;

@interface IESLiveChargeSafeRemindAlert : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *desLabel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) NSArray *textArray;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (nonatomic) double startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tapConfirmButton;
- (void)tapClearArea;
- (void)tapAlertArea;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
