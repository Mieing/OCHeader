@interface WeChat.MMFinderLiveChooseFunctionViewModel : NSObject <UITableViewDelegate, UITableViewDataSource, WeChat.MMFinderLiveChooseFunctionCellDelegate> {
    void /* unknown type, empty encoding */ dataArray;
    void /* unknown type, empty encoding */ chooseFunctionPanel;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ hasFirstDisable;

- (void)showChooseFunctionPanelWithDataArray:(id)a0 superView:(id)a1;
- (void)updateChooseFunctionPanelWithDataArray:(id)a0;
- (id)getChooseFunctionPanel;
- (void)liveChooseFunctionCellDidSelectWithIndexPath:(id)a0 item:(id)a1 isActionButton:(BOOL)a2;
- (void)liveChooseFunctionDetailDidSelectWithIndexPath:(id)a0 item:(id)a1;
- (void)updateContentViewHeightWithContentViewHeight:(double)a0;
- (void)hideLiveChooseFunctionWithAnimated:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)init;
- (void).cxx_destruct;

@end
