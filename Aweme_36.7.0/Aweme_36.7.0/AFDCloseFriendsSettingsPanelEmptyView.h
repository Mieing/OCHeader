@class NSArray, NSString, UITableView;
@protocol AFDCloseFriendsSettingsPanelEmptyViewDelegate;

@interface AFDCloseFriendsSettingsPanelEmptyView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *emptyList;
@property (weak, nonatomic) id<AFDCloseFriendsSettingsPanelEmptyViewDelegate> delegate;
@property (readonly, nonatomic) double contentHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setupData;
- (void)layoutUI;

@end
