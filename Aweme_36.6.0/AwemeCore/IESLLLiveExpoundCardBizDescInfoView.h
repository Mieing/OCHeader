@class UITableView, NSString, UILabel, IESLLLiveExpoundCardBizDescInfo;

@interface IESLLLiveExpoundCardBizDescInfoView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UITableView *attrTableView;
@property (retain, nonatomic) IESLLLiveExpoundCardBizDescInfo *bizDescInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isValidBizDescInfo:(id)a0;
- (void)updateTitleLabelWithBizDescInfo:(id)a0;
- (BOOL)isTitleTwoLine:(id)a0;
- (void)updateViewWithBizDescInfo:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupUI;

@end
