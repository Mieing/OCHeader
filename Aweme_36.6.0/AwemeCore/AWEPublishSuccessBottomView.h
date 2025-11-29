@class UITableView, NSArray, NSString, AWEAwemeModel, UIView, NSMutableArray, UILabel;

@interface AWEPublishSuccessBottomView : UIView <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate>

@property (readonly, nonatomic) AWEAwemeModel *model;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) BOOL showIMListOnly;
@property (retain, nonatomic) NSArray *shareModelList;
@property (retain, nonatomic) NSMutableArray *sharedUsers;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UILabel *shareTitle;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ bindButtonClicked;
@property (nonatomic) BOOL enableShareIMList;
@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIView *successView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)p_enterFrom;
- (void)trackViewDidShow;
- (id)initWithAweme:(id)a0 type:(unsigned long long)a1 shouldEnableIMShare:(BOOL)a2 showIMListOnly:(BOOL)a3 shareModels:(id)a4;
- (double)heightForBottomView;
- (void)trackViewDidDismiss;
- (void)p_bindButtonClicked;
- (void)btnOnclicked:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)bottomOffset;

@end
