@class NSArray, NSString, UITableView;
@protocol WCFinderPostUsualTopicViewDelegate;

@interface WCFinderPostUsualTopicView : MMUIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) NSArray *usualTopicsArray;
@property (retain, nonatomic) UITableView *topicsTableView;
@property (weak, nonatomic) id<WCFinderPostUsualTopicViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateTopicWidth:(double)a0 bottom:(double)a1 usualTopicsArray:(id)a2;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
