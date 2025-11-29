@class AWELiveVisibleTypeDataSource, HTSEventContext, NSArray, NSString, UILabel, UITableView;

@interface AWELiveVisibleTypePanelView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long liveType;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWELiveVisibleTypeDataSource *dataSource;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (nonatomic) BOOL isVip;
@property (retain, nonatomic) NSArray *selectedUsers;
@property (nonatomic) BOOL isShowNotPreviewOption;
@property (nonatomic) BOOL isPaidOpenLiveNow;
@property (copy, nonatomic) id /* block */ selectedPaidBlock;
@property (nonatomic) unsigned long long paidVisibleType;
@property (retain, nonatomic) UILabel *panelTitle;
@property (nonatomic) double panelHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithType:(unsigned long long)a0 liveType:(unsigned long long)a1 isVip:(BOOL)a2 trackerContext:(id)a3 DIContext:(id)a4 selectedBlock:(id /* block */)a5;
- (id)initPaidPanelWithVisibleType:(unsigned long long)a0 selectedUsers:(id)a1 isShowNotPreviewOption:(BOOL)a2 isPaidOpenLiveNow:(BOOL)a3 trackerContext:(id)a4 DIContext:(id)a5 selectedBlock:(id /* block */)a6;
- (void)updateLiveShowPaidUI;
- (void).cxx_destruct;
- (void)reload;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupUI;
- (void)setupData;

@end
