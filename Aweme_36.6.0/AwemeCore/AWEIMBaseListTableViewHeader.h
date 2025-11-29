@class NSArray, NSString, UITableView;
@protocol AWEIMBaseListTableViewHeaderDelegate;

@interface AWEIMBaseListTableViewHeader : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *functionArray;
@property (nonatomic) BOOL showAllFollower;
@property (weak, nonatomic) id<AWEIMBaseListTableViewHeaderDelegate> delegate;
@property (nonatomic) BOOL assignBackgroundColorIsClear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)functionHeight;
- (double)__heightForFunctionArray;
- (double)__heightForFunction:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 functionArray:(id)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)layoutSubviews;

@end
