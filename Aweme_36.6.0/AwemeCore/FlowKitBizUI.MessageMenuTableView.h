@interface FlowKitBizUI.MessageMenuTableView : UITableView <UITableViewDataSource, UITableViewDelegate> {
    void /* unknown type, empty encoding */ clickExpendBlock;
    void /* unknown type, empty encoding */ clickBlock;
    void /* unknown type, empty encoding */ actions;
    void /* unknown type, empty encoding */ isExpand;
    void /* unknown type, empty encoding */ isFromDeepThinking;
}

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (id)initWithCoder:(id)a0;

@end
