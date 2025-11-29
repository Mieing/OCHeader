@class UITableView, NSString, IESLiveTableViewSectionAdapterProxy;
@protocol IESLiveTableViewSectionAdapterDelegate, UITableViewDataSource;

@interface IESLiveTableViewSectionAdapter : NSObject <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) IESLiveTableViewSectionAdapterProxy *proxy;
@property (weak, nonatomic) UITableView *tableView;
@property (weak, nonatomic) id<IESLiveTableViewSectionAdapterDelegate> delegate;
@property (weak, nonatomic) id<UITableViewDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)adapterForTableView:(id)a0;

- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)sections;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
