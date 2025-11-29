@class NSString, NSMutableArray, UITableView;
@protocol MMFinderLiveChooseClarityTableDataDelegate;

@interface MMFinderLiveChooseClarityTableViewModel : NSObject <UITableViewDelegate, UITableViewDataSource> {
    NSMutableArray *_clarityMethodDataArray;
}

@property (readonly, nonatomic) NSMutableArray *clarityMethodDataArray;
@property (weak, nonatomic) UITableView *tableView;
@property (weak, nonatomic) id<MMFinderLiveChooseClarityTableDataDelegate> dataDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTableView:(id)a0;
- (void)appendClarityMethodData:(id)a0;
- (double)getClarityTableHeight;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
