@class NSString, NSMutableArray, UITableView;
@protocol MMFinderLiveLotteryMethodOperationTableDataDelegate;

@interface MMFinderLiveLotteryMethodOperationTableViewModel : NSObject <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) NSMutableArray *lotteryMethodDataArray;
@property (weak, nonatomic) UITableView *tableView;
@property (weak, nonatomic) id<MMFinderLiveLotteryMethodOperationTableDataDelegate> dataDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTableView:(id)a0;
- (void)appendLotteryMethodData:(id)a0;
- (double)getLotteryTableHeight;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
