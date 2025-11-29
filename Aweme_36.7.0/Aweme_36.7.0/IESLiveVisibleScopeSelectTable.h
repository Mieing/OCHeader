@class NSArray, NSString, NSMutableDictionary, UITableView;

@interface IESLiveVisibleScopeSelectTable : UIView <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *list;
@property (retain, nonatomic) NSString *firstUserName;
@property (nonatomic) unsigned long long totalCount;
@property (nonatomic) long long selectIdx;
@property (nonatomic) unsigned long long targetType;
@property (retain, nonatomic) NSMutableDictionary *paidLiveInfo;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateDataList:(id)a0 initialIndex:(long long)a1 selectedUsers:(id)a2 targetType:(unsigned long long)a3 paidLiveInfo:(id)a4;
- (void)updateDataList:(id)a0 initialIndex:(long long)a1 targetType:(unsigned long long)a2 paidLiveInfo:(id)a3;
- (void)updateSelectedUsers:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)setup;
- (void)setupSubviews;

@end
