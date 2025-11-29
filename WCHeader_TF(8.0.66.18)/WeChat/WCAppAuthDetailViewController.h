@class NSString, NSArray, WCAppAuthDetailFooterView, WCAppAuthDataItem, WCAppAuthDetailHeaderView, WCAppAuthLogicController, MMTableView;

@interface WCAppAuthDetailViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCAppAuthDetailFooterViewDelegate, WCAppAuthLogicDelegate, WCAppAuthLogicExt>

@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) WCAppAuthDetailHeaderView *tableHeaderView;
@property (retain, nonatomic) WCAppAuthDetailFooterView *tableFooterView;
@property (retain, nonatomic) WCAppAuthLogicController *logicController;
@property (retain, nonatomic) WCAppAuthDataItem *appDataItem;
@property (retain, nonatomic) NSArray *arrScopeInfoItem;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int fromIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAppData:(id)a0 authLogic:(id)a1 fromScene:(unsigned int)a2 index:(unsigned int)a3;
- (void)viewDidLoad;
- (void)initView;
- (void)initTableView;
- (void)layoutTableHeaderView;
- (void)layoutTableFooterView;
- (id)navigationBarBackgroundColor;
- (void)viewDidLayoutSubviews;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)onDetailFooterCancelBtnClick;
- (void)logicWillStartDeletionApp:(id)a0;
- (void)logicDidFinishDeletionApp:(id)a0 index:(unsigned int)a1;
- (void)logicDeletionAppFail:(id)a0;
- (void).cxx_destruct;

@end
