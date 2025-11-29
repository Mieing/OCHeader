@class WADebugSkylineOptions, NSMutableDictionary, NSString;

@interface WADebugSkylineView : UITableView <UITableViewDataSource>

@property (retain, nonatomic) WADebugSkylineOptions *options;
@property (retain, nonatomic) NSMutableDictionary *oldOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAppId:(id)a0;
- (void)configTableView;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)optionChanged;
- (void).cxx_destruct;

@end
