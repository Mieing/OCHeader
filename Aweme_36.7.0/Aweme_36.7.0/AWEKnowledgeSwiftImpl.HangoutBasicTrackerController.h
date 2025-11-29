@interface AWEKnowledgeSwiftImpl.HangoutBasicTrackerController : AWEDCFeedBaseController {
    void /* unknown type, empty encoding */ markSlide;
    void /* unknown type, empty encoding */ appearDate;
    void /* unknown type, empty encoding */ dismissDate;
    void /* unknown type, empty encoding */ didDispatchFirstLoadFinish;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hangoutWidgetUserDefaultsName;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hangoutWidgetCurrentAwemeID;
    void /* unknown type, empty encoding */ $__lazy_storage_$_extensionSuitName;
}

- (void)containerScrollViewDidScroll:(id)a0;
- (void)containerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)containerScrollViewDidEndDecelerating:(id)a0;
- (void)containerScrollViewWillBeginDragging:(id)a0;
- (void)enterContainerWithModel:(id)a0;
- (void)containerViewWillAppear:(BOOL)a0;
- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerViewWillDisappear:(BOOL)a0;
- (void)containerViewDidDisappear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)listDidReloadData;
- (void)onGeneralActionTriggeredWithType:(unsigned long long)a0 sender:(id)a1 params:(id)a2 sectionViewModel:(id)a3;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (id)init;
- (void)applicationWillResignActive;
- (void)dealloc;

@end
