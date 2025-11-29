@class MMUIViewController;
@protocol MMTListTableViewContext;

@interface MMTListSectionController : NSObject

@property (weak, nonatomic) id<MMTListTableViewContext> tableViewContext;
@property (weak, nonatomic) MMUIViewController *viewController;
@property (nonatomic) long long section;
@property (nonatomic) BOOL isFirstSection;
@property (nonatomic) BOOL isLastSection;

- (id)init;
- (long long)numberOfItems;
- (double)heightForRowAtIndex:(long long)a0;
- (double)heightForHeader;
- (double)heightForFooter;
- (id)viewForHeader;
- (id)viewForFooter;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (id)cellForItemAtIndex:(long long)a0 section:(long long)a1;
- (void)willDisplayCell:(id)a0 forRowAtIndex:(long long)a1;
- (void)didDisplayCell:(id)a0 forRowAtIndex:(long long)a1;
- (void)didSelectRowAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (id)objectForIndexPath:(id)a0;
- (void)onExposeItem:(id)a0 indexPath:(id)a1;
- (void).cxx_destruct;

@end
