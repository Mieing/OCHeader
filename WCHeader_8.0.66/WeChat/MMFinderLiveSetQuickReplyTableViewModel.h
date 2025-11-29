@class NSString, NSMutableArray, UITableView;
@protocol MMFinderLiveSetQuickReplyTableDataDelegate;

@interface MMFinderLiveSetQuickReplyTableViewModel : NSObject <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) NSMutableArray *dataArray;
@property (weak, nonatomic) UITableView *tableView;
@property (weak, nonatomic) id<MMFinderLiveSetQuickReplyTableDataDelegate> dataDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTableView:(id)a0;
- (void)updateData:(id)a0;
- (void)makeFirstResponder:(long long)a0;
- (id)getCurrrentDataArray;
- (double)getTableHeight;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayFooterView:(id)a1 forSection:(long long)a2;
- (void)addButtonClick;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)quickReplyTableCleanButtonClick:(id)a0 dataArray:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
