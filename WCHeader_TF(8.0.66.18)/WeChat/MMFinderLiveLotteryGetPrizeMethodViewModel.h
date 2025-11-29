@class NSIndexPath, NSString, NSMutableArray, UITableView;
@protocol MMFinderLiveLotteryGetPrizeMethodDelegate;

@interface MMFinderLiveLotteryGetPrizeMethodViewModel : NSObject <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) NSMutableArray *lotteryMethodDataArray;
@property (retain, nonatomic) NSIndexPath *selectIndexPath;
@property (weak, nonatomic) UITableView *tableView;
@property (weak, nonatomic) id<MMFinderLiveLotteryGetPrizeMethodDelegate> dataDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTableView:(id)a0;
- (id)createData;
- (void)appendLotteryMethodData:(id)a0;
- (double)getLotteryTableHeight;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
