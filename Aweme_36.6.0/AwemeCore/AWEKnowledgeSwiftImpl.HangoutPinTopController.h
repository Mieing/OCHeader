@interface AWEKnowledgeSwiftImpl.HangoutPinTopController : AWEDCFeedBaseController

- (void)detailTableViewController:(id)a0 scrollDidEndAtIndexPath:(id)a1 model:(id)a2;
- (void)detailTableViewControllerWillExit:(id)a0 currentAwemeModel:(id)a1;
- (void)fullPageFeedWillPlayModel:(id)a0 index:(long long)a1;
- (void)fullPageFeedViewDidDisappear:(id)a0;
- (void)containerViewDidDisappear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)init;

@end
