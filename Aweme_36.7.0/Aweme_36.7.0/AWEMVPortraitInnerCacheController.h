@class AWEMVChannelPageContext;

@interface AWEMVPortraitInnerCacheController : AWEDCFeedBaseController

@property (readonly, nonatomic) AWEMVChannelPageContext *mvContext;

- (void)detailTableViewController:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2 model:(id)a3;
- (void)detailTableViewControllerWillExit:(id)a0 currentAwemeModel:(id)a1;
- (void)onLoadMoreListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;

@end
