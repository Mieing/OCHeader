@class NSString, NSMutableArray, MMTableView;
@protocol MMFinderLiveCommentSensitiveSearchTableDelegate;

@interface MMFinderLiveCommentSensitiveSearchTableViewModel : NSObject <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) NSMutableArray *sensitiveResultDataItems;
@property (weak, nonatomic) id<MMFinderLiveCommentSensitiveSearchTableDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTableView:(id)a0;
- (void)updateSensitiveDataItems:(id)a0;
- (void)deleteSensitiveDataItemAtIndex:(unsigned long long)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;

@end
