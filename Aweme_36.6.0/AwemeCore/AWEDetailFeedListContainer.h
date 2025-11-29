@class AWEAwemeDetailTableView, AWEDetailFeedCellContainer, NSString, AWEDetailFeedPageInfoData;

@interface AWEDetailFeedListContainer : AWEArchContainer <UITableViewDataSource, UITableViewDelegate, AWEDetailFeedTableViewAbilityProtocol>

@property (retain, nonatomic) AWEAwemeDetailTableView *tableView;
@property (retain, nonatomic) AWEDetailFeedPageInfoData *pageInfo;
@property (retain, nonatomic) AWEDetailFeedCellContainer *cellContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupContainer;
- (void)setupDetailTableView;
- (id)originTableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tmp_tableView;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;

@end
