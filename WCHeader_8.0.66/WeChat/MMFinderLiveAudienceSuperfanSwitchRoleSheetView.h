@class NSArray, NSString, MMFinderLiveTaskId, MMFinderJoinLiveContext, UITableView;

@interface MMFinderLiveAudienceSuperfanSwitchRoleSheetView : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *roleInfos;
@property (retain, nonatomic) MMFinderJoinLiveContext *liveContext;
@property (copy, nonatomic) id /* block */ switchRoleCallback;
@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveTaskId:(id)a0;
- (void)setupPageSheetConfig;
- (void)initViewsAndData;
- (void)safeAreaInsetsDidChange;
- (id)getSuperfanBadgeForAliasType:(long long)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
