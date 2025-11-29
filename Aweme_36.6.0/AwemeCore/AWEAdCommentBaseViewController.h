@class AWEAdFeedCommentViewController, NSDictionary, NSString, UITableView;
@protocol AWECommentListServiceContainerProtocol;

@interface AWEAdCommentBaseViewController : UIViewController <AWECommentScrollViewAccessCommentCellContainerDelegate, AWECommentListBusinessServiceContainerContextProtocol>

@property (retain, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEAdFeedCommentViewController *commentViewController;
@property (weak, nonatomic) id<AWECommentListServiceContainerProtocol> commentServiceContainerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configBusinessCommentListServiceContainerWithAweme:(id)a0 vc:(id)a1 colorMode:(unsigned long long)a2 businessExtraParams:(id)a3;

- (long long)businessServiceDataSourceCount;
- (id)identifierForBusinessServiceDataSourceInSection:(long long)a0;
- (id)replyCountForSection:(long long)a0;
- (void)updateReplyCountForSection:(long long)a0 count:(long long)a1;
- (void)container_changeServiceContainerPage:(id)a0;
- (BOOL)container_shouldTriggerAccessCommentCell;
- (long long)container_scrollView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)container_scrollView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)container_scrollView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)container_scrollView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)container_scrollView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)container_scrollView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)container_scrollView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (void)container_scrollView:(id)a0 didEndDisplayingHeaderView:(id)a1 forSection:(long long)a2;
- (void)container_scrollView:(id)a0 willDisplayFooterView:(id)a1 forSection:(long long)a2;
- (void)container_scrollView:(id)a0 didEndDisplayingFooterView:(id)a1 forSection:(long long)a2;
- (void)container_scrollView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)container_scrollViewT:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)container_scrollViewT:(id)a0 cellOfContainer:(id)a1 atIndexPath:(id)a2;
- (void)container_scrollViewT:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)container_scrollViewT:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (long long)sectionForIdentifier:(id)a0;
- (void)viewDidLoad;
- (id)currentList;

@end
