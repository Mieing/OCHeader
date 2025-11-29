@class NSString, MMUIViewController, NSMutableSet, MMListReportManager, MMTListSectionMap, UITableView;
@protocol MMTListAdapterDelegate, MMTListAdapterDataSource, UITableViewDelegate, UIScrollViewDelegate;

@interface MMTListAdapter : NSObject <UITableViewDataSource, UITableViewDelegate, MMTListTableViewContext>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) MMUIViewController *viewController;
@property (readonly, nonatomic) MMTListSectionMap *sectionMap;
@property (retain, nonatomic) NSMutableSet *registeredCellIdentifiers;
@property (retain, nonatomic) NSMutableSet *registeredSupplementaryViewIdentifiers;
@property (nonatomic) BOOL isInObjectUpdateTransaction;
@property (weak, nonatomic) id<MMTListAdapterDataSource> dataSource;
@property (weak, nonatomic) id<MMTListAdapterDelegate> delegate;
@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) MMListReportManager *reportHandler;
@property (weak, nonatomic) id<UITableViewDelegate> tableViewDelegate;
@property (weak, nonatomic) id<UIScrollViewDelegate> scrollViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithViewController:(id)a0;
- (void)reloadData;
- (void)_updateObjects;
- (void)_updateWithData:(id)a0;
- (id)_generateTransitionDataWithObjects:(id)a0 dataSource:(id)a1;
- (void)_updateObjects:(id)a0 dataSource:(id)a1;
- (id)sectionControllerForSection:(long long)a0;
- (id)indexPathForSectionController:(id)a0 index:(long long)a1;
- (id)dequeueReusableCellOfClass:(Class)a0 forSectionController:(id)a1 atIndex:(long long)a2;
- (id)dequeueReusableCellOfClass:(Class)a0 withReuseIdentifier:(id)a1 forSectionController:(id)a2 atIndex:(long long)a3;
- (void)deselectRowAtIndex:(long long)a0 sectionController:(id)a1 animated:(BOOL)a2;
- (id)cellForItemAtIndex:(long long)a0 sectionController:(id)a1;
- (id)objectForSectionController:(id)a0;
- (void).cxx_destruct;

@end
