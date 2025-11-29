@class UITableView, NSArray, NSString, UILabel, UIView, UIButton;

@interface AWESearchFilmTVSourceSheet : UIView <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic) BOOL tapBackgroundToDismiss;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIView *divideLine;
@property (retain, nonatomic) UIView *actionSheet;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *modelArray;
@property (copy, nonatomic) id /* block */ buttonClickedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configModel:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)show;

@end
