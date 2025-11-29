@class NSArray, NSString, UIView, UILabel, UITableView;

@interface WABrandBindWeAppListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource> {
    UIView *_contentHeaderView;
    UILabel *_contentLabel;
    UITableView *_listTableView;
}

@property (retain, nonatomic) NSArray *arrBindWeAppInfo;
@property (retain, nonatomic) NSString *fromBrandUserName;
@property (copy, nonatomic) NSString *fromBrandAppid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)initView;
- (void)initContentLabel;
- (void)initTableView;
- (void)viewDidLayoutSubviews;
- (void)layoutMySubViews;
- (void)onBackButtonClicked:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)navigationBarBackgroundColor;
- (void).cxx_destruct;

@end
