@class AWEIMNoticeSideContext, NSString, AWEIMNoticeOnSideDataController, NSArray, AWEIMNoticeOnSideViewControllerContentView;

@interface AWEIMNoticeOnSideViewController : NSObject <UITableViewDelegate, UITableViewDataSource, AWEUserMessage, AWEIMSideNoticeViewControllerProtocol>

@property (retain, nonatomic) AWEIMNoticeOnSideDataController *dataController;
@property (retain, nonatomic) AWEIMNoticeOnSideViewControllerContentView *contentView;
@property (retain, nonatomic) AWEIMNoticeSideContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ dataCallBack;
@property (copy, nonatomic) NSArray *dataArray;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)__setupUI;
- (void)__fetchData;
- (void)__updateUIByLocalData;
- (void)__clearData;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)dealloc;
- (id)detailView;
- (void)refreshData;

@end
