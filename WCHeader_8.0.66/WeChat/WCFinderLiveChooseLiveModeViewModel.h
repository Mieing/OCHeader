@class NSString, NSMutableArray;
@protocol WCFinderLiveChooseLiveModeViewModelDelegate;

@interface WCFinderLiveChooseLiveModeViewModel : NSObject <UITableViewDelegate, UITableViewDataSource> {
    NSMutableArray *_dataArray;
}

@property (readonly, nonatomic) NSMutableArray *dataArray;
@property (weak, nonatomic) id<WCFinderLiveChooseLiveModeViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendClarityMethodData:(id)a0;
- (void)appendData:(id)a0;
- (void)onRedDotExposed;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;

@end
