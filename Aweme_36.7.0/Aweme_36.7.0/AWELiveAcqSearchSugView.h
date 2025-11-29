@class NSArray, NSString, AWELiveAcqCastVideoSearchSugManager, UITableView;
@protocol AWELiveAcqCastVideoViewModelProtocol;

@interface AWELiveAcqSearchSugView : UIView <UITableViewDataSource, UITableViewDelegate>

@property (copy, nonatomic) NSArray *sugList;
@property (retain, nonatomic) AWELiveAcqCastVideoSearchSugManager *manager;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) id<AWELiveAcqCastVideoViewModelProtocol> viewModel;
@property (copy, nonatomic) id /* block */ didSelect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0 manager:(id)a1;
- (void)updateSugList:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)setupUI;

@end
