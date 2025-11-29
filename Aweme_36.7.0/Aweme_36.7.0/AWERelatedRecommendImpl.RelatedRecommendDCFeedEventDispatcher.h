@interface AWERelatedRecommendImpl.RelatedRecommendDCFeedEventDispatcher : NSObject <AWEDCFeedEventDispatcherProtocol> {
    void /* unknown type, empty encoding */ lastFeedCell;
    void /* unknown type, empty encoding */ getInnerDataController;
    void /* unknown type, empty encoding */ backAction;
    void /* unknown type, empty encoding */ relatedModel;
    void /* unknown type, empty encoding */ exitInnerVCAction;
    void /* unknown type, empty encoding */ hasShowLastCellMask;
    void /* unknown type, empty encoding */ scrollViewDidScrollAction;
    void /* unknown type, empty encoding */ isInnerFlowEntranceIDReseted;
    void /* unknown type, empty encoding */ cellWillDisplayCallBack;
    void /* unknown type, empty encoding */ cellDidBeginSelectCallBack;
    void /* unknown type, empty encoding */ themeBeginChange;
    void /* unknown type, empty encoding */ scrollViewDidEndDragging;
    void /* unknown type, empty encoding */ scrollViewDidScrollFinishAction;
}

- (void)containerScrollViewDidScroll:(id)a0;
- (void)containerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)containerScrollViewDidEndDecelerating:(id)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 startDidSelectItemAtIndexPath:(id)a1;
- (void)themeBeginReload;
- (void)onGeneralActionTriggeredWithType:(unsigned long long)a0 sender:(id)a1 params:(id)a2 sectionViewModel:(id)a3;
- (void)fullPageFeedViewDidDisappear:(id)a0;
- (void)detailTableViewController:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2 model:(id)a3;
- (void)detailTableViewControllerDidDisappear:(id)a0 currentAwemeModel:(id)a1;
- (void)detailTableViewControllerWillExit:(id)a0 currentAwemeModel:(id)a1;
- (void)lastCellMaskViewShowIfNeededWith:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
