@interface AWEKnowledgeSwiftImpl.HangoutMigTrackerController : AWEDCFeedBaseController {
    void /* unknown type, empty encoding */ hasShownCellDic;
    void /* unknown type, empty encoding */ hasRealShownCellDic;
    void /* unknown type, empty encoding */ innerFirstItemStartTime;
    void /* unknown type, empty encoding */ innerPlayDuration;
    void /* unknown type, empty encoding */ lastClickAwemeModel;
}

- (void)detailTableViewControllerWillDisappear:(id)a0 currentAwemeModel:(id)a1;
- (void)detailTableViewControllerDidAppear:(id)a0 currentAwemeModel:(id)a1;
- (void)detailTableViewControllerWillExit:(id)a0 currentAwemeModel:(id)a1;
- (void)containerScrollViewDidScroll:(id)a0;
- (void)containerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)containerScrollViewDidEndDecelerating:(id)a0;
- (void)containerScrollViewWillBeginDragging:(id)a0;
- (void)fullPageFeedViewDidDisappear:(id)a0;
- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerViewWillDisappear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)listDidReloadData;
- (void)onGeneralActionTriggeredWithType:(unsigned long long)a0 sender:(id)a1 params:(id)a2 sectionViewModel:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
