@class NSArray, NSString, UILabel, UIView, UITableView;

@interface AWEACCSingleChoiceActionSheet : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UIView *background;
@property (retain, nonatomic) UIView *shortLine;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *subTitle;
@property (retain, nonatomic) UITableView *list;
@property (copy, nonatomic) NSArray *actionList;
@property (nonatomic) double lastLocationY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_updateUI;
- (void)p_addPanGesture;
- (void)p_dismiss;
- (void)p_show;
- (void)p_panGesAction:(id)a0;
- (void)showWithTitle:(id)a0 subTitle:(id)a1 actionList:(id)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;

@end
